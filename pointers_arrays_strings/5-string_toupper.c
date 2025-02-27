#include "main.h"
#include "2-strlen.c"
/**
 * string_toupper - upper all the letter in a string
 * @str: the char to upper
 *
 * Return: the char that as been upper
 */
char *string_toupper(char *str)
{
	int length, i;

	length = _strlen(str);
	for (i = 0; i < length ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
