#include "main.h"
#include <stdlib.h>
#include "strlen.c"
#include <stdio.h>
/**
 * _calloc - do the same as the function calloc
 * @nmemb: number of elements
 * @size: size of the type of all elements
 *
 * Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(size * nmemb);
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size * nmemb ; i++)
	{
		((char *)result)[i] = 0;
	}
	return (result);
}
