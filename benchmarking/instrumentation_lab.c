#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return (*state);
}

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
		dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
			v = -v;
		dataset[i] = v;
	}
}

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
		sum = (sum * 131ul) + (unsigned long)dataset[i];

	return (sum);
}



int main(void)
{
	unsigned long checksum;

	clock_t total_1, total_2;
	clock_t build_1, build_2;
	clock_t process_1, process_2;

	double total_time;
	double build_time;
	double process_time;
	double reduce_time;

	total_1 = clock();

	build_1 = clock();
	build_dataset();
	build_2 = clock();

	process_1 = clock();
	process_dataset();
	process_2 = clock();

	reduce_1 = clock();
	checksum = reduce_checksum();
	reduce_2 = clock();
	total_2 = clock();

	build_time = (double)(build_2 - build_1) / CLOCKS_PER_SEC;
	process_time = (double)(process_2 - process_1) / CLOCKS_PER_SEC;
	reduce_time = (double)(reduce_2 - reduce_1) / CLOCKS_PER_SEC;
	total_time = (double)(total_2 - total_1) / CLOCKS_PER_SEC;

	build_dataset();
	process_dataset();
	checksum = reduce_checksum();

	if (checksum == 0ul)
		printf("impossible\n");

	printf("TOTAL seconds: %.6f\n", total_time);
	printf("BUILD_DATA seconds: %.6f\n", build_time);
	printf("PROCESS seconds: %.6f\n", process_time);
	printf("REDUCE seconds: %.6f\n", reduce_time);

	return (0);
	}
