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
	if (argc == 3)
	{
		printf("%ld\n", strtol(argv[1], NULL, 10) *
				strtol(argv[2], NULL, 10));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
