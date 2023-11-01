#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
