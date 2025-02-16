#include "main.h"

/**
 * print_sign - test a number to kow if is greater or less than 0
 * @n: the number to test
 *
 * Return: 1 if the nmber is greater than 0, 0 if the number
 * is equal to 0 and -1 if the number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
