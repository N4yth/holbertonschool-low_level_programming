#include "_putchar.c"
/**
 * print_alphabet - ...
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 121 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return ;
}
