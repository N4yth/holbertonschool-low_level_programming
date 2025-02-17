#include "main.h"

/**
 * _abs - get a number and give the absolute of this number
 * @c: the number to retun after get the absolute
 *
 * Return: the number in absolute
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
