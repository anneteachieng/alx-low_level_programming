#include "main.h"

/**
 * main - check the code for ALX School students
 * Return: always 0
 */

int main(void)
{
	char s[] = "Expect the best, Prepare to the worst,
		Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
