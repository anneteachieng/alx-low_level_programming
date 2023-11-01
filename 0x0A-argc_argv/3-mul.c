#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c1 = 0, c2 = 0;

	if (argc == 3)
	{
		c1 = atoi(argv[1]);
		c2 = atoi(argv[2]);
		printf("%d\n", c1 * c2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
