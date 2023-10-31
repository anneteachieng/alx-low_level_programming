#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 * @str: string to duplicate
 * Return: NULL if str == NULL
*/

char *_strdup(char *str)
{
	int a = 0, d = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[d] != '\0')
		d++;

	s = malloc((d + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[a] != '\0')
	{
		s[a] = str[a];
		a++;
	}

	return (s);
}
