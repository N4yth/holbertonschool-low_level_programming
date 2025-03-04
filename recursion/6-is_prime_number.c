#include"main.h"

/**
 * verification_var - is the recursive function that look far all potential
 * multiple of var
 * @var: the number look for multiplier
 * @incre: the incrementation variable
 *
 * Return: 0 if a number is a multiplie 1 if there is not multiplier
 */
int verification_var(int var, int incre)
{
	if (incre == var / 2)
		return (1);
	else if (var % incre == 0)
		return (0);
	else
		return (verification_var(var, incre + 1));
}

/**
 * is_prime_number - look if a number is a prime number or not
 * @n: the number to inspect
 *
 * Return: 0 if it s not a prime number and 1 if it s a prime number
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (verification_var(n, 3));
}


