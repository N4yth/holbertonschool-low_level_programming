#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * verif - verif verifie if the char is equal to the selection
 * @test_char: the character test
 *
 * Return: 1 if it is a match and 0 if not
 */

int verif(char test_char)
{
	int i, result = 0;
	char verif[14] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41,
		123, 125};

	for (i = 0 ; i < 14 ; i++)
	{
		if (test_char == verif[i])
			result = 1;
	}
	return (result);
}

/**
 * cap_string - replace first letter of a word by a capital
 * @str: the char
 *
 * Return: the char that as been modify
 */
char *cap_string(char *str)
{
	int length, i;

	length = _strlen(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	for (i = 1; i < length ; i++)
	{
		if (!verif(str[i]) && verif(str[i - 1]) &&
				(str[i] < 'A' || str[i] > 'Z') && 
				str[i] != '0')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
