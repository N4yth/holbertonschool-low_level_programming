#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - do the sum of all parameter of the function
 * @n: the number of parameter
 *
 * Return: the sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		result += va_arg(args, int);
	}
	return (result);
}
