#include "main.h"
#include <stdlib.h>
#include "strlen.c"
#include <stdio.h>

/**
 * argstostr - concatenate all argument given by the main
 * @ac: the number of argument
 * @av: the list of argument
 *
 * Return: the array wanted
 */
char *argstostr(int ac, char **av)
{
	char *str_out;
	int i, prog = 0, sec_i, count = 0, size;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ac ; i++)
	{
		count += _strlen(av[i] + 1);
	}
	str_out = malloc(count * sizeof(char));
	for (i = 0 ; i < ac ; i++)
	{
		size = _strlen(av[i]);
		for (sec_i = 0 ; sec_i < size ; sec_i++)
		{
			str_out[prog] = av[i][sec_i];
			prog++;
		}
		str_out[prog++] = '\n';
	}
	return (str_out);
}
