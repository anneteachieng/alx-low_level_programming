#include "main.h"

/**
 * _puts - prints string
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
