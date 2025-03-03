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
char *_strpbrk(char *s, char *accept)
{
	int length, i;
	
	length = _strlen(s);
	for (; *s ; s++)
	{
		for (i = 0 ; i < length - 1 ; i++)
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
