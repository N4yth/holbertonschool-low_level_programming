#include"main.h"
#include "strlen.c"
#include <stdio.h>

/**
 * print_diagsums - print a chessboard
 * @a: the array whit data
 * @size: the size of the 2d array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sec_i = size - 1;
	unsigned int first_res = 0, second_res = 0;

	for (i = 0 ; i < size * size ; i += size + 1)
	{
		first_res += a[i];
		second_res += a[sec_i];
		sec_i += size - 1;
	}
	printf("%d, %d\n", first_res, second_res);
}
