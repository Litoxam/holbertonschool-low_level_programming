#include <stdio.h>

int main(void)
{
	int choice;
	
while (choice != 0)
{
printf("Hello ! Please make it work ! I want my free hoodie from Holberton !\n");
printf("1) Addition\n");
printf("2) Substract\n");
printf("3) Multiply\n");
printf("4) Divide\n");
printf("0) Quit\n");

scanf("%d", &choice);



		switch (choice)
		{
	case 1:
	{
		int action;
				do {
			int num1, num2;
			printf("First number: ");
			scanf("%d", &num1);
			printf("Second number: ");
			scanf("%d", &num2);
			printf("Result: %d\n", num1 + num2);
			printf("1) Again?\n");
			printf("2) Back to menu\n");
			scanf("%d", &action);
				} while (action == 1);
		break;
	}
	case 2:
	{
		int action;
				do {
		int num1, num2;
		printf("First number: ");
		scanf("%d", &num1);
		printf("Second number: ");
		scanf("%d", &num2);
		printf("Result: %d\n", num1 - num2);
		printf("1) Again?\n");
		printf("2) Back to menu\n");
		scanf("%d", &action);
				} while (action == 1);
		break;
	}
	case 3:
	{
		int action;
				do {
			int num1, num2;
			printf("First number: ");
			scanf("%d", &num1);
			printf("Second number: ");
			scanf("%d", &num2);
			printf("Result: %d\n", num1 * num2);
			printf("1) Again?\n");
			printf("2) Back to menu\n");
			scanf("%d", &action);
				} while (action == 1);
		break;
	}	
	case 4:
	{	
		int action;
				do {
			int num1, num2;
			printf("First number: ");
			scanf("%d", &num1);
			printf("Second number: ");
			scanf("%d", &num2);
			if (num2 == 0)
				printf("Division by zero impossible!\n");
			else
				printf("Result: %d\n", num1 / num2);
			printf("1) Again?\n");
			printf("2) Back to menu\n");
			scanf("%d", &action);
				} while (action == 1);
		break;
	}
	case (0):
	printf("Bye Mathieu !\n");
}
	
}
	return (0);
}