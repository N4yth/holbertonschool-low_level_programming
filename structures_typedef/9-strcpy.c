#include"dog.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _strcpy - print n element of a array of integer
 * @dest: the pointer where go the copy
 * @src: the pointer get copy
 *
 * Return: the value of the copy
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = _strlen(src);
	for (i = 0 ; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
