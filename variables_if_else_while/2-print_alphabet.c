#include <stdio.h>
/**
 * main - generate a random number and say if the last digit and say
 * if its greater \5 or less than \6
 *
 * Return: nothing
 */
int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";

	while (*str)
	{
		putchar(*str++);
	}
	return (0);
}
