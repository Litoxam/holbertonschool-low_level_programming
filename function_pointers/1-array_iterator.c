#include "function_pointers.h"

/**
 * array_iterator - execute a function with array in parameter
 * @array: name of the array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
