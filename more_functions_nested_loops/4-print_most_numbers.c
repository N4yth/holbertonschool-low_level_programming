#include "main.h"
/**
 * print_most_numbers - print all number from 0 to 9 without 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
