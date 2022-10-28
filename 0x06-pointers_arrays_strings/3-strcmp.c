#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: string 2 to compare against
 * Return: 0 if s1 and s2 are equal
 *         negative integer if the stopping character
 *         in @s1 was less than the stopping at @s2
 *         positive integer if the stopping
 *         in @s1 is greater than @s2
 */

int _strcmp(char *s1, char *s2)
{
	int q = 0, r;

	/**
	 * iterate through src and
	 * compare it with dest
	 */
	while (s1[q] != '\0' && s2[q] != '\0')
	{
		/**
		 * if they differ by a single character
		 * don't iterate further
		 */
		if (s1[q] != s2[q])
		{
			/*
			 * return the difference between
			 * the two characters
			 */
			r = s1[q] - s2[q];
			break;
		}
		else
		{
			r = s1[q] - s2[q];
		}
		q++;
	}
	return (r);
}
