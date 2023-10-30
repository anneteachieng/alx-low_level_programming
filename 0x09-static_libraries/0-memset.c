#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: pointer to the memory to fill
 * @b: the desired value to fill s
 * @n: number of bytes to be changed
 * Return: pointer to the filled memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
