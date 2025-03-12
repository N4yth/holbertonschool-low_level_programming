#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print all variable of a dog type variable
 * @d: the dog variable
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
		{
			printf("Name: (nil)\n");
		}
		printf("age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: (nil)\n");
	}
}
