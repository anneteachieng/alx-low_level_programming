#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true, else -1
 * @array: array
 * @size: size of the elements in the array
 * @cmp: pointer to the comparing function
 * Return: 0, or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
