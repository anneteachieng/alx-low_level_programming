#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _puts - print a string
 * @str: string pointer
 * Return: void
*/
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] >= 0; a++)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[a]);
	}
}
