#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print char parameter given
 * @separator: the character use to separate the element print
 * @n: the number of parameter
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
