#include"main.h"
#include "2-strlen.c"
/**
 * _strncat - take 2 string to concatenate them using n byte from src
 * @dest: the destination string
 * @src: the source string
 * @n: n byte that will be concatenates in the dest
 *
 * Return: the string of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest, length_src, i;

	length_src = _strlen(src);
	length_dest = _strlen(dest);
	for (i = 0; i < n && i < length_src; i++)
	{
		dest[length_dest] = src[i];
		length_dest++;
	}
	return (dest);
}
