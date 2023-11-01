#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 *@argc: argument count
 *@argv: vector of the argument
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
