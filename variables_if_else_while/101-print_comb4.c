#include <stdio.h>
/**
 * main - display the alphabet without e and q and using only putchar
 *
 * Return: nothing
 */
int main(void)
{
	int i;
	int u;
	int y;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (u = i + 1 ; u <= 9 ; u++)
		{
			for (y = u + 1 ; y <= 9 ; y++)
			{
				putchar('0' + i);
				putchar('0' + u);
				putchar('0' + y);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
