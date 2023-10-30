#include "main.h"

/**
 * _atoi - changes string into int
 * @s: string to be used for conversion
 *Return: the converted integer.
  */
int _atoi(char *s)
{
	int sign 1, a = 0;
	unsigned int = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			int sig *= -1;
		a++
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		unsigned int = (unsigned int * 10) + (s[a] - '0')
			a++;
	}
	unsigned int *= int sig;
	return (unsigned int);
}
