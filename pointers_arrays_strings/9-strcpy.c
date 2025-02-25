#include"main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * print_array - print n element of a array of integer
 * @a: the array
 * @n: number of element to be printed
 *
 * Return: null
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;
	
	length = _strlen(src);
	for (i = 0 ; i < length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
