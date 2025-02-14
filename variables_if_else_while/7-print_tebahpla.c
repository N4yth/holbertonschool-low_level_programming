#include <stdio.h>
/**
 * main - display the alphabet without e and q and using only putchar
 *
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 122 ; i >= 97 ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
