#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create a copy of an array
 * @str: the array to copy
 *
 * Return: the copy array
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
	cpy_arr = malloc(sizeof(char) * size + 1);
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
