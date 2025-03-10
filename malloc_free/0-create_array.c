#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @c: the char use to fill the array
 * @size: the size of array
 *
 * Return: the array wanted
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr_result;

	if (size == 0)
	{
		return (NULL);
	}
	if (NULL == (arr_result = malloc(sizeof(char) * size)))
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr_result[i] = c;
	}
	return (arr_result);
}
