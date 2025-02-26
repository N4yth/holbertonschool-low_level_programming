#include"main.h"
#include "9-strcpy.c"
#include "_putchar.c"
/**
 * _strncpy - take 2 string to cpy the second into the first
 * @dest: the destination string
 * @src: the source string
 * @n: n byte that will be copy from the src
 *
 * Return: the string of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
