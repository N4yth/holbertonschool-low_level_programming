#include"main.h"
/**
 * reset_to_98 - reset to 98 a pointer
 * @n: pointer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap_a, swap_b; 

	swap_a = *a;
	swap_b = *b;
	*b = swap_a;
	*a = swap_b;
}
