#include "main.h"
#include "strlen.c"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - make a 2D array with define width and height in parameter
 * @width: width of the 2D arry
 * @height: height of the 2D array
 *
 * Return: the 2D array
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **arr_2d;

	arr_2d = malloc(sizeof(int *) * height);
	if (arr_2d == NULL)
	{
		return (NULL);
	}
	for (row = 0 ; row < height ; row++)
	{
		arr_2d[row] = malloc(sizeof(int) * width);
		if (arr_2d[row] == NULL)
		{
			while (row--)
			{
				free(arr_2d[row]);
			}
			free(arr_2d);
			return (NULL);
		}
		for (col = 0 ; col < width ; col++)
		{
			arr_2d[row][col] = 0;
		}
	}
	return (arr_2d);
}
