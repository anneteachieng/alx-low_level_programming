#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 * @...: variable number of parameters to calculate sum of
 * Return: if n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list va;
	unsigned int i;

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);

	return (sum);
}
