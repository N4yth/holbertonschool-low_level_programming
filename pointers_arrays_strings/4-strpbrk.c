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
	int length, i, sec_i, length_acc;
	
	length = _strlen(s);
	length_acc = _strlen(accept);
	for (i = 0 ; i < length ; i++)
	{
		for (sec_i = 0 ; sec_i < length_acc ; sec_i++)
		{
			if (s[i] == accept[sec_i])
			{
				return (&s[i]);
			}
		}
	}
	if (*accept != '\0')
		return ('\0');
	return (s);
}
