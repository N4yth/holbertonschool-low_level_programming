#include "main.h"
/**
 * more_numbers - display number from 0 to 14 ten time
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int row;
	int i;
	int to_print;

	for (row = 0 ; row < 10 ; row++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
				to_print = i % 10;
			}
			else
			{
				to_print = i;
			}
			_putchar('0' + to_print);

		}
		_putchar('\n');
	}
}
