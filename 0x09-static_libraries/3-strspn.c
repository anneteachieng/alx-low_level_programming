#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
