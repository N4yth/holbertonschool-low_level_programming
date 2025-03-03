#include"main.h"
#include "strlen.c"
#include <stdio.h>

/**
 * _strstr - look into a array to see if there is a string in this array
 * @haystack: the array to look into
 * @needle: the string to look
 *
 * Return: the first occurence of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, sec_i, length_nee, length, count;

	length = _strlen(haystack);
	length_nee = _strlen(needle);
	if (*needle == '\0')
		return (haystack);
	for (i = 0; i < length ; i++)
	{
		for (sec_i = 0 ; sec_i < length_nee ; sec_i++)
		{
			if (haystack[i] == needle[sec_i])
			{
				count++;
				break;
			}
		}
		if (count == length_nee - 1)
		{
			return (&haystack[i - count + 1]);
		}
		if (haystack[i] == ' ')
			count = 0;
	}
	return ('\0');
}
