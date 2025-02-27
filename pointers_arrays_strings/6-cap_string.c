#include "main.h"
#include "2-strlen.c"
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
	for (i = 0; i < length ; i++)
	{
		if (verif(str[i]))
		{
			if (!verif(str[i + 1]) && (str[i + 1] < 'A' || str[i + 1] > 'Z'))
			{

				str[i + 1] = str[i + 1] - 'a' + 'A';
				i = i + 2;
			}
		}
	}
	return (str);
}
