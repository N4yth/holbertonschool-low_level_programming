#include "main.h"
/**
 * reverse_array - reverse a array
 * @a: the array to reverse
 * @n: the length of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int save, start_lst = 0, end_lst = n - 1;

	while (start_lst < end_lst)
	{
		save = a[start_lst];
		a[start_lst] = a[end_lst];
		a[end_lst] = save;
		end_lst--;
		start_lst++;
	}
}
