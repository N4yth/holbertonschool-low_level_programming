#include <stdio.h>
/**
 * main - display the alphabet without e and q and using only putchar
 *
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
