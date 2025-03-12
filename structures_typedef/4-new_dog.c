#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - ..
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: te new dog variable create
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *other_dog;

	other_dog = malloc(sizeof(char *) + sizeof(float) + sizeof(char *));
	if (other_dog == NULL)
	{
		free(other_dog);
		return (NULL);
	}
	other_dog->name = name;
	other_dog->age = age;
	other_dog->owner = owner;

	return (other_dog);
}
