ii#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determine either greater than 5, isless then 6, or is 0
 *
 * Return: Always 0
 */
int main(void)
{
	int n,l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is  greater than 5\n", n, a);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
