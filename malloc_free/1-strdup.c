#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - create an array
 * @c: the char use to fill the array
 * @size: the size of array
 *
 * Return: the array wanted
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *cpy_arr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
		size++;
	}
	cpy_arr = malloc(sizeof(char) * size);
	if (cpy_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		cpy_arr[i] = str[i];
	}
	return (cpy_arr);
}
