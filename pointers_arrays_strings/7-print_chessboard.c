#include"main.h"
#include "strlen.c"
#include <stdio.h>

/**
 * print_chessboard - print a chessboard
 * @a: the array whit chess data
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8 ; row++)
	{
		for (column = 0 ; column < 8 ; column++)
		{
			_putchar (a[row][column]);
		}
		_putchar('\n');
	}
}
