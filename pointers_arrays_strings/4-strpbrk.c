#include"main.h"
#include "strlen.c"
/**
 * _strpbrk - look into a array to see if there is a character from the list
 * @s: the array to look into
 * @accept: the array of character to look
 *
 * Return: the first occurence of one of the caractere
 */
char *_strpbrk(char *s, char *accept)
{
	int length, i;
	
	length = _strlen(s);
	for (; *s ; s++)
	{
		for (i = 0 ; i < length ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	if (*accept != '\0')
		return ('\0');
	return (s);
}
