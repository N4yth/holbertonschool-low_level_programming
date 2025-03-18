#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a character argument
 * @a: the list of the argument
 *
 * Return: Nothing
 */
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_int - print a string argument
 * @a: the list of the argument
 *
 * Return: Nothing
 */
void print_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * print_float - print a float argument
 * @a: the list of the argument
 *
 * Return: Nothing
 */
void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * print_str - print a string parameter
 * @a: the list of the parameter
 *
 * Return: Nothing
 */
void print_str(va_list a)
{
	char *str;

	str = va_arg(a, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print all parameter with different type
 * @format: the format of all parameter given
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int map_i;
	char *separateur = "";
	pr_ty print_map[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_str},
	{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		map_i = 0;
		while (print_map[map_i].format)
		{
			if (format[i] == print_map[map_i].format)
			{
				printf("%s", separateur);
				print_map[map_i].f(args);
				separateur = ", ";
				break;
			}
			map_i++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
