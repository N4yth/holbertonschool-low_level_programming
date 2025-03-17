#include "3-calc.h"

/**
 * op_add - add two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - do the difference of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - do the product of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - do the division of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the result of the divison of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - do the modulo of a and b
 * @a: the first number
 * @b: the second number
 *
 * Return: the rest of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
