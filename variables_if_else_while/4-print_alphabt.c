#include <stdio.h>
/**
 * main - display the alphabet without e and q and using only putchar
 *
 * Return: nothing
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i != 101 || i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
