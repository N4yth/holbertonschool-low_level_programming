#include "main.h"

/**
 * print_last_digit - print and return the last digit of the entry
 * @num: the number to return his last digit
 *
 * Return: the last digit
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
		result *= -1;
	_putchar('0' + result);
	return (result);
}
