#include"main.h"
/**
 * _memcpy - remplace the n first value of an array list by a value
 * @dest: the array to modify
 * @src: the array use to remplace in the array
 * @n: the number of time to remplace
 *
 * Return: the value of the modify array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
