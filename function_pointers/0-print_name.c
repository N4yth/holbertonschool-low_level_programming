#include "function_pointers.h"

/**
 * print_name - print a name using a pointer of function
 * @name: the name
 * @f: the function use to print
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
