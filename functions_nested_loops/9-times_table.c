#include "main.h"

/**
 * times_table - print the 9 table
 *
 * Return: nothing
 */
void times_table(void)
{
	int column;
	int row;
	int result;

	for (row = 0 ; row < 10 ; row++)
	{
		_putchar('0');
		for (column = 1 ; column < 10 ; column++)
		{
			result = column * row;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');

	}
}
