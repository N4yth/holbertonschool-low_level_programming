#include "main.h"
/**
 * print_diagonal - print a diagonal of bckslash character
 * @n: the number of times to print backslash
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int row;

	for (row = 0 ; row < n ; row++)
	{
		for (i = 0 ; i <= row ; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
