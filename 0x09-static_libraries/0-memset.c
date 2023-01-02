#include "main.h"

/**
 * _memset - a function that fills 
 *           memory with a cinstant byte
 * @s: input pointe to char type
 *     represents the pointer to the
 *     block of memory to fill
 * @b: the desired value to fill s
 * @n: number of bytes to be changed
 * Return: pointer to the filled memory
 *        area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}


