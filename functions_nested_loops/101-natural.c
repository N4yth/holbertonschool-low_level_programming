#include <stdio.h>
/**
 * main - find all multiples of 3 and 5 and additionnate all of us below 1024
 *
 * Return: nothing
 */
int main(void)
{
	int i;
	int sum_result = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3) == 0)
			sum_result += i;
		if ((i % 5) == 0)
			sum_result += i;
	}
	printf("%d\n", sum_result);
	return (0);
}
