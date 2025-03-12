#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a dog type variable
 * @d: the dog variable create
 * @name: the name to give to the dog variable
 * @age: the age to give to the dog variable
 * @owner: the owner to give to the dog variable
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
