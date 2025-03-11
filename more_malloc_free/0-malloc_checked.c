#include "main.h"
#include "strlen.c"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate 2 array in a new array
 * @s1: the first array to concatenate
 * @s2: the seconde array to concatenate
 *
 * Return: the new concatenate array
 */
void *malloc_checked(unsigned int b)
{
	int *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	return (result);
}
