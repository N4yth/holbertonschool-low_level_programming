#include <stdio.h>
/**
 * main - ...
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long int i;
	unsigned long int old = 1;
	unsigned long int new = 2;
	unsigned long int save = 0;

	printf("1, 2");
	for (i = 1 ; i < 96 ; i++)
	{
		save = old;
		old = new;
		new = new + save;
		printf(", %lu", new);
	}
	printf("\n");
	return (0);
}
