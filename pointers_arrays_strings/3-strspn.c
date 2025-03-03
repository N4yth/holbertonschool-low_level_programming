#include"main.h"
#include "strlen.c"
#include <stdio.h>
/**
 * _strspn - Returns the length of the largest substring containing only
 * characters specified in the list of accepted characters
 * @s: the array to look into
 * @accept: the character to accept
 *
 * Return: the length of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, length, sec_i, length_acce, check = 0;
	unsigned int count = 0;

	length = _strlen(s);
	length_acce = _strlen(accept);
	for (i = 0 ; i < length ; i++)
	{
		for (sec_i = 0 ; sec_i < length_acce ; sec_i++)
		{
			if (s[i] == accept[sec_i])
			{
				count++;
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			return (count);
		}
		check = 0;
	}
	return (count);
}
