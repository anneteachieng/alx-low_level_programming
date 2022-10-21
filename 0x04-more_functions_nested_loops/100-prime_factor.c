#include <stdio.h>

/**
 * main - prints largest prime factor0f 612852475143
 * Return: Always 0.
 */

int main(void)
{
	long int n, j;

	n = 612852475143;
	for (j = 3; j < 782849; j + 2)
	{
		while ((n % j == 0) && (n != j))
			n = n / j;
	}
	printf("%lu\n", n);
	return (0);
}
