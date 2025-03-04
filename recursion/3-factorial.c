#include"main.h"
#include <stdio.h>
/**
 * factorial - calculate the factorial of a given number
 * @n: the number to do the factorial
 *
 * Return: the resultat of the factorial
 */
int factorial(int n)
{
	int result = n;

	if (n > 0)
	{
		result *= factorial(n - 1);
		return (result);
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
