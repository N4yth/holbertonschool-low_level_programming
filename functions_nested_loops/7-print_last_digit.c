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

	num = num * ((num > 0) - (num < 0));
	result = (num % 10);
	_putchar('0' + result);
	return (result);
}
