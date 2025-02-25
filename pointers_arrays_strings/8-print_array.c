#include"main.h"
#include <stdio.h>
/**
 * print_array - print n element of a array of integer
 * @a: the array
 * @n: number of element to be printed
 *
 * Return: null
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (i = 1 ; i < n ; i++)
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
