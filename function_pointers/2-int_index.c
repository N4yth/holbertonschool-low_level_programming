#include "function_pointers.h"

/**
 * int_index - look in an array for carracter that match the function test
 * @array: the array to print
 * @size: the size of the array
 * @cmp: the function that is used test the element of the array
 *
 * Return: the index of the first element that match the test of cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (; i < size ; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
