#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - main
 * @argc: number of argument
 * @argv: list of argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error3\n");
		exit(99);
	}
	result = (get_op_func(argv[2])(a, b));
	printf("%d\n", result);
	return (0);
}
