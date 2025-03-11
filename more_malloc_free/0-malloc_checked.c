#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - alocate a place in the memory
 * @b: the size to alocate memory
 *
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	return (result);
}
