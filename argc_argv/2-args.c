#include"main.h"
#include <stdio.h>
/**
 * main - affiche chaque arguement 
 * @argc: the length of the array argv
 * @argv: all the parameter give to the main
 *
 * Return: the length of the array of argument
 */
int main(int argc, char *argv[])
{
int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
