#include"main.h"
#include <stdio.h>
/**
 * main - affiche le nom du fichier executable
 * @argc: the length of the array argv
 * @argv: all the parameter give to the main
 *
 * Return: the length of the array of argument
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = argv[0];

	return (0);
}
