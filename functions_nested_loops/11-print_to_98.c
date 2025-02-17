#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - list all number from n to 98
 * @n: start number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);
		if (n > 98)
			i--;
		else if (n < 98)
			i++;
	}
	printf("98\n");
}
