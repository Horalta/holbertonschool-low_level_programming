#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of array
 * @cmp: pointer to function to compare values
 *
 * Return: index of first element for which cmp function does not return 0,
 * -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
