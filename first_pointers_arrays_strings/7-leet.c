#include "main.h"
#include "2-strlen.c"
/**
 * leet - a programme that encode into leet a string
 * @str: the string the need to be encode
 *
 * Return: the sring encoded
 */
char *leet(char *str)
{
	int i, sec_i, length;
	char verif [11] = {97, 101, 111, 116, 108, 65, 69, 79, 84, 76};
	char change [11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	length = _strlen(str);
	for (i = 0 ; i < length ; i++)
	{
		for (sec_i = 0 ; sec_i < 11 ; sec_i++)
		{
			if (str[i] == verif[sec_i])
			{
				str[i] = change[sec_i];
			}
		}
	}
	return (str);
}
