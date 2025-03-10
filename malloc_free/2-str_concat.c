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
char *str_concat(char *s1, char *s2)
{
	int i, size_1, size_2;
	char *arr_conca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	arr_conca = malloc((sizeof(char) * size_1) + (sizeof(char) * size_2) - 1);
	if (arr_conca == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size_1 + size_2 ; i++)
	{
		if (i < size_1)
		{
			arr_conca[i] = s1[i];
		}
		else
		{
			arr_conca[i] = s2[i - size_1];
		}
	}
	return (arr_conca);
}
