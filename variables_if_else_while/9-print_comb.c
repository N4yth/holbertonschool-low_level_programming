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
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
