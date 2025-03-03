#include"main.h"
#include "strlen.c"
#include <stdio.h>

/**
 * _strpbrk - look into a array to see if there is a character from the list
 * @s: the array to look into
 * @accept: the array of character to look
 *
 * Return: the first occurence of one of the caractere
 */
char *_strpbrk(char *s, char *accept)
{
	int sec_i, length_acc;
	
	length_acc = _strlen(accept);
	for (; *s ; s++)
	{
		for (sec_i = 0 ; sec_i < length_acc ; sec_i++)
		{
			if (*s == accept[sec_i])
			{
				return (s);
			}
		}
	}
	return (s);
}
