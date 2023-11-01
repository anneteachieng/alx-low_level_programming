#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: count of argument
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
