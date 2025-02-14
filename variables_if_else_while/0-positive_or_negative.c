#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - generate a random number and say if he is negative or positive
 *
 * Return: nothing
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
	return (0);
}
