#include "main.h"
/**
 * print_alphabet_x10 - display 10 time the alphabet in lowercase using
 * 2 for loop
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int sec_i;

	for (sec_i = 0 ; sec_i < 10 ; sec_i++)
	{
		for (i = 97 ; i <= 122 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
