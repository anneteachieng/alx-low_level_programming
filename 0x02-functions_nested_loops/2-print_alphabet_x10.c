#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int ten;
	char lett;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
			_putchar(lett)
				_putchar('\n');
	}
}
