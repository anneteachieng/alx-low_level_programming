#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Return: C if thr character is found, null if not
 */
char *_strchr(char *s, char c)
{
		int i;

		while (1)
		{
			i = *s++;
			if (i == c)
			{
				return (s - 1);
			}
			if (i == 0)
			{
				return (null);
			}
		}
}
