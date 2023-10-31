#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: argument array
 * Return: If successful 0 always
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int a = 0, j;
	
	while (a < argc)
	{
		j = a;
		a++;
	}
	printf("%d\n", j);
	return (0);
}
