#include"main.h"
/**
 * swap_int - swap two int pointer
 * @a: first value to swap
 * @b: second value to swap
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
