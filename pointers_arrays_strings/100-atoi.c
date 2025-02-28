#include"main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * _atoi - take a char pointer and return only the number in int
 * @s: the char pointer to use
 *
 * Return: the number in int
 */
int _atoi(char *s)
{
	int digit, signe = 1, bool_start = 0, result = 0;
	
	for (; *s ; s++)
	{
		if (*s == '-')
			signe = -signe;

		if (*s >= '0' && *s <= '9')
		{
			bool_start = 1;
			digit = (*s - '0') * signe;
			result = result * 10 + digit;
		}
		else if (bool_start == 1)
		{
			break;
		}
	}
	return (result);
}
