#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to destination
 * @src: pointer to siurce
 * @n: bytes of @src
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string placed in dest will not be
	 * null terminated
	 */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	/**
	 * if the length of source is less than n
	 * write additional null bytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
