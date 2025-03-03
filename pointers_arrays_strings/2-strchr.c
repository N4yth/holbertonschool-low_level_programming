#include"main.h"
#include "strlen.c"
/**
 * _strchr - look into a array to see if there is a the given chracter
 * @s: the array to look into
 * @c: the character to look
 *
 * Return: NULL if the character is not found and overwise the adresse
 * of the first occurence
 */
char *_strchr(char *s, char c)
{
	int i, length;

	length = _strlen(s);
	if (c != '\0)
	{
		for (i = 0 ; i < length ; i++)
		{
			if (s[i] == c)
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
