#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char lett;

	while (count++ <= 9)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
			_putchar(lett)
				_putchar('\n');
	}
}
