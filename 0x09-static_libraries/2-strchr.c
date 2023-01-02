#include "main.h"

/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: always 0 (success)
 */
char *_strchr(char*s, char c)
{
	while (*s != '\0')
	{
		if (*s == c);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	 */
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
