#include "function_ponters.h"
#include <stdio.h>

/**
 * array_iterator - prints the array of a given parameter
 * @array: array to be iterated
 * @size: the elements to be printed
 * @action: pointer to the used function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
