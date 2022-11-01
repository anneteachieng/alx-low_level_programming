#include "main.h"

/**
 * _strpbrk - function that seraches a string for
 *            any set of bytes.
 * @s: pointer to input string
 * @accept: pointer to string we searching in @s
 * Return: pointer to the bytes in @s or NULLf not found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
