#include"main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_triangle - display a triangle
 * @size: size of the triangle
 *
 * Return: nothing
 */
int main(void)
{
	long val = 612852475143, i, result = 0;

	for (i = 0 ; i < val ; i++)
	{

		if (i % val == 0)
		{
			break;
		}
	}
	printf("%ld\n", result);
	return (0);
}
