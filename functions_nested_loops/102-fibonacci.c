#include <stdio.h>
/**
 * main - ...
 *
 * Return: nothing
 */
int main(void)
{
	long int i;
	long int old = 1;
	long int new = 2;
	long int save;

	printf("1, 2");
	for (i = 1 ; i <= 52 ; i++)
	{
		save = old;
		old = new;
		new = new + save;
		printf(", %ld", new);
	}
	printf("\n");
	return (0);
}
