#include "dog.h"
#include <stdlib.h>
/**
 * _strpbrk - look into a array to see if there is a character from the list
 * @s: the array to look into
 * @accept: the array of character to look
 *
 * Return: the first occurence of one of the caractere
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
