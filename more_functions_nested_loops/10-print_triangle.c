#include"main.h"
/**
 * print_triangle - display a triangle
 * @size: size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int row;
	int space;
	int actual_length;

	if (size >= 0)
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (space = size - row ; space > 0 ; space--)
			{
				_putchar(' ');
			}
			for (actual_length = 0 ; actual_length < row ; actual_length++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
	}
}
