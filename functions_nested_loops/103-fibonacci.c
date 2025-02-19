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
	long int result_sum = 2;

	for (i = 1 ; new < 4000000 ; i++)
	{
		save = old;
		old = new;
		new = new + save;
		if ((new % 2) == 0)
		{
			result_sum += new;
		}
	}
	printf("%ld\n", result_sum);
	return (0);
}
