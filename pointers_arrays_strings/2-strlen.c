#include"main.h"
/**
 * _strlen - ...
 * @s: ...
 *
 * Return: ...
 */
int _strlen(char *s)
{
	int sum;

	for (; *s ; s++)
	{
		sum += sizeof(*s);
	}
	return (sum);
}
