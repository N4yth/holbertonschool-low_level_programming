#include"main.h"
#include "strlen.c"
#include <stdio.h>

/**
 * set_string - ...
 * @s: the pointer to pointer
 * @to: the pointer to add to the pointer to pointer
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
