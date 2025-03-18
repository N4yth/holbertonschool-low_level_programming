#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print int parameter given
 * @separator: the character use to separate the element print
 * @n: the number of parameter
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(args, n);

		for (i = 0 ; i < n ; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
