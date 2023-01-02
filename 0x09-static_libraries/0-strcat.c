#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate through each rc array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while ovewritting the null byte in des*/
		dest[c++] = src[c2];

	return (dest);
}
