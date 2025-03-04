#include"main.h"
/**
 * _print_rev_recursion - print in reverse a string using recursion
 * @s: the string to print
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);
	}
	else
		return;
}
