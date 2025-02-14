#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - generate a random number and say if the last digit and say
 * if its greater \5 or less than \6
 *
 * Return: nothing
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n,
		last_digit);
	return (0);
}
