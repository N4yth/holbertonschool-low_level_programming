#include "main.h"
/**
 * print_square - print a square of n size
 * @size: the size of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int row;

	for (row = 0 ; row < size ; row++)
	{
		for (i = 0 ; i < size ; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
