#include "main.h"
#include <stdlib.h>
#include "strlen.c"
#include <stdio.h>
/**
 * array_range - create an array of elements that start with min to max
 * @min: the start number (the smallest)
 * @max: the final number (the biggest)
 *
 * Return: the pointer
 */
int *array_range(int min, int max)
{
	int *arr_resu, i, start_val = min;

	if (min > max)
	{
		return (NULL);
	}

	arr_resu = malloc(sizeof(int) * (max - min + 1));
	if (arr_resu == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i <= max - min ; i++)
	{
		arr_resu[i] = start_val;
		start_val++;
	}
	arr_resu[i++] = '\0';
	return (arr_resu);
}
