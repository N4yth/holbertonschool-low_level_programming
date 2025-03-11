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
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	result = malloc(size * nmemb);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb ; i++)
	{
		result[i] = 0;
	}
	return (result);
}
