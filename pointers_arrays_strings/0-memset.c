#include"main.h"
/**
 * _memset - remplace the n first value of an array list by a value
 * @s: the array to modify
 * @b: the character use to remplace in the array
 * @n: the number of time to remplace
 *
 * Return: the value of the modify array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
