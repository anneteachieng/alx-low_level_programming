#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: argument array
 * Return: If successful 0 always
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d/n", argc - 1);
	return (0);
}
