#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates the character's array
 * @size: size of array
 * @c: the character of the array
 *
 * Return: filled array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;

	}
	return (b);
}
