#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string parameter input
 * Return: nothing
 */

void rev_string(char *s)
{
	int 1, i;
	char ch;

	/*find string length without null char*/
	for (i = 0; i < 1 / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = ch;
	}
}
