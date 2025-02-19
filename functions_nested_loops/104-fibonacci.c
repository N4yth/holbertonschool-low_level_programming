#include <stdio.h>
/**
 * main - ...
 *
 * Return: nothing
 */
int main(void)
{
	double i;
	double old = 1;
	double new = 2;
	double save;
	
	printf("1, 2");
	for (i = 1 ; i < 96 ; i++)
	{
		save = old;
		old = new;
		new = new + save;
		printf(", %g", new);
	}
	printf("\n");
	return (0);
}
