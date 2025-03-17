#include "function_pointers.h"

/**
 * print_name - print a name using a pointer of function
 * @name: the name
 * @f: the function use to print
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
