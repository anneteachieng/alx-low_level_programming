#include "main.h"

/**
 * ptint_sign - print the sign of a num
 * @n: the num to be checked for
 * Return 1 and prints + if greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar( '-');
		return (-1);
	}
}
