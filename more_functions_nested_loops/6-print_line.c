#include "main.h"
/**
 * print_line - display X times _
 * @n: the number of times to print _
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar('_');
	_putchar('\n');
}
