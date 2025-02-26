#include"main.h"
#include "2-strlen.c"
/**
 * _strcat - take 2 string to concatenate them
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the string of dest
 */
char *_strcat(char *dest, char *src)
{
	int length_dest;

	length_dest = _strlen(dest);
	for (; *src ; src++)
	{
		dest[length_dest] = *src;
		length_dest++;
	}
	return (dest);
}
