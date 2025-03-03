#include"main.h"
#include <stdlib.h>
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
	if (c != '\0')
	{
		for (; *s ; s++)
		{
			if (*s == c)
			{
				return (s);
			}
		}
	}
	return(s);
}
