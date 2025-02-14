#include "main.h"
#include "_putchar.c"

/**
 * main - ...
 *
 * Return: nothing
 */
int main(void)
{
	char *var = "_putchar\n";

	while (*var)
	{
		_putchar(*var++);
	}
	return (0);
}
