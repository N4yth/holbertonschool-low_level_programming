#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - affiche chaque arguement
 * @argc: the length of the array argv
 * @argv: all the parameter give to the main
 *
 * Return: the length of the array of argument
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc <= 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
