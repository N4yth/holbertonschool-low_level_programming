#include "main.h"
#include "2-strlen.c"
/**
 * _strcmp - take 2 string to compare their length and return positif
 * negatif or null if s1 is respectuly higher lower or equal
 * @s1: the first string compared
 * @s2: the second string compared
 *
 * Return: the int
 */
int _strcmp(char *s1, char *s2)
{
	int result, length_s1, length_s2;

	length_s1 = _strlen(s1);
	length_s2 = _strlen(s2);

	if (length_s1 < length_s2)
		result = -15;
	else if (length_s1 > length_s2)
		result = 15;
	else
		result = 0;

	return (result);
}
