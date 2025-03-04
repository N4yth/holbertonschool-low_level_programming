#include"main.h"
#include <stdio.h>
/**
 * _strlen_recursion - calculate the length of the string
 * @s: the string calculate
 *
 * Return: the length of the String
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(&s[i]);
	}
	return (i);
}
