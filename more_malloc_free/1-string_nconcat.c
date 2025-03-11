#include "main.h"
#include <stdlib.h>
#include "strlen.c"
#include <stdio.h>
/**
 * string_nconcat - concatenate two string in 1 new
 * @s1: the first part that we want to concatenate
 * @s2: the second part that we want to concatenate
 * @n: the length of s2 that we want to concatenate
 *
 * Return: the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1, size_s2, i;
	char *str_resu;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);

	if (size_s2 > n)
		size_s2 = n;

	str_resu = malloc(sizeof(char) * (size_s2 + size_s1) + 1);
	if (str_resu == NULL)
		return (NULL);

	for (i = 0 ; i < size_s1 + size_s2 ; i++)
	{
		if (i < size_s1)
		{
			str_resu[i] = s1[i];
		}
		else
		{
			str_resu[i] = s2[i - size_s1];
		}
	}
	str_resu[i++] = '\0';
	return (str_resu);
}
