#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, len = 0, q  = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[q])
		q++;

	if (n < q)
		p = malloc(sizeof(char) * (len + n + 1));
	else
		p = malloc(sizeof(char) * (len + q + 1));

	if (!p)
		return (NULL);

	while (i < len)
	{
		p[i] = s1[i];
		i++;
	}

	while (n < q && i < (len + n))
		p[i++] = s2[j++];

	while (n >= q && i < (len + q))
		p[i++] = s2[j++];

	p[i] = '\0';

	return (p);
}
