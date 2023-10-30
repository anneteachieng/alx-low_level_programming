#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return:1 if success, 0 if otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int q, r;

	for (q = 0; *(s + q) != '\0'; q++)
	{
		for (r = 0; *(accept + r) != '\0'; r++)
		{
			if (*(s + q) == *(accept + r))
				return (s + q);
		}
	}
	return ('\0');
}
