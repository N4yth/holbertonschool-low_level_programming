#include"main.h"
#include <stdio.h>

/**
 * verification_var - verification that the var can be squared
 * @var: the variable to square
 * @incre: the variable that is use to look for square of var
 *
 * Return: -1 if there no int square overwith the square of var
 */
int verification_var(int var, int incre)
{
	if (incre * incre == var)
		return (incre);
	else if (incre > var / 2)
	{
		return (-1);
	}
	else
	{
		return (verification_var(var, incre + 1));
	}
}

/**
 * _sqrt_recursion - look for the square of a int
 * @n: the int to look
 *
 * Return: the square of n or -1 if there is not int square
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (verification_var(n, 0));
}
