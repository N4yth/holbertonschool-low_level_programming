#include"main.h"
/**
 * _strlen - ...
 * @s: ...
 *
 * Return: ...
 */
int _strlen(char *s)
{
	int sum = 0;

	for (; *s ; s++)
	{
		sum += 1;
	}
	return (sum);
}
