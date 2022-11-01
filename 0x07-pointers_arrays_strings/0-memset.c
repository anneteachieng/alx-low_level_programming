#include "main.h"

/**
 * _memset - a function that fills memory with byte
 * @s: input pointerof char
 * @b: input variable of char
 * @n: unsigned int variable
 * Return: a pointer to the filled memory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsignedint
	 * because we are storing a
	 * value that will always be
	 * zero or positive
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
