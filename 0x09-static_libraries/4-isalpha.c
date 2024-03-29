#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* _isalpha - checks if character is alphabetic
* @c: takes input from other functions.
* Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	/*check if character is either A-Z or a-z*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
