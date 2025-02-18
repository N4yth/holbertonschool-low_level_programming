#include "main.h"

/**
 * print_to_98 - list all number from n to 98
 * @n: start number
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int y;
	int result;

	if (n > 0 && n < 15)
	{
		for (i = 0 ; i <= n ; i++)
		{	
			_putchar('0');
			for (y = 1 ; y <= n ; y++)
			{
				result = y * i;
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar('0' + result /	10);
					_putchar('0' + result % 10);
				}
				else
				{
					_putchar('0' + result / 100);
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + result % 10);
				}			
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
