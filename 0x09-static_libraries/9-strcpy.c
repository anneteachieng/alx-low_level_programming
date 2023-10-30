#include "main.h"
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int s = 0;

	while (*(src + s) != '\0')
	{
		*(dest + s) = *(src + s);
		s++;
	}
	*(dest + s) = '\0';
	return (dest);
}
