#include"main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: the string to reverse
 *
 * Return: null
 */
void rev_string(char *s)
{
	int recursive = 0, i, sec_i = 0;
	char cara_stock = 'a';

	recursive = _strlen(s);
	if (recursive > 0)
	{
		for (i = recursive - 1 ; i >= recursive / 2 ; i--)
		{
			cara_stock = s[sec_i];
			s[sec_i] = s[i];
			s[i] = cara_stock;
			sec_i++;
		}
	}
}
