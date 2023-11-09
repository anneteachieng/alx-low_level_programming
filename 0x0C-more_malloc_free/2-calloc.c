#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members in array
 * @size: size of element
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int b = 0, c = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = nmemb * size;
	p = malloc(c);

	if (p == NULL)
		return (NULL);

	while (b < c)
	{
		p[b] = 0;
		b++;
	}

	return (p);
}
