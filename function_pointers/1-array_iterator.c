#include "function_pointers.h"

/**
 * array_iterator - iterate on an aray using un pointer to function
 * @array: the array to print
 * @size: the size of the array to print
 * @action: the function that is used to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size ; i++)
	{
		action(array[i]);
	}
}
