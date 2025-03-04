#include"main.h"
#include <stdio.h>
/**
 * _pow_recursion - make a int to a power
 * @x: int to powered
 * @y: power
 *
 * Return: the powered int
 */
int _pow_recursion(int x, int y)
{
	int pow = y, result = 1;

	if (pow > 0)
	{
		result = _pow_recursion(x, pow - 1);
		result *= x;
		return (result);
	}
	else if (pow == 0)
		return (1);
	else
		return (-1);
}
