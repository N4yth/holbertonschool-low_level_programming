#include "dog.h"
#include <stdlib.h>
#include "9-strcpy.c"
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

	other_dog = malloc(sizeof(dog_t));
	if (other_dog == NULL)
	{
		free(other_dog);
		return (NULL);
	}
	other_dog->name = malloc(sizeof(char) * _strlen(name));
	if  (other_dog->name == NULL)
	{
		free(other_dog->name);
		free(other_dog);
		return (NULL);
	}
	other_dog->owner = malloc(sizeof(char) * _strlen(owner));
	if (other_dog->owner == NULL)
	{
		free(other_dog->name);
		free(other_dog->owner);
		free(other_dog);
		return (NULL);
	}

	_strcpy(other_dog->name, name);
	other_dog->age = age;
	_strcpy(other_dog->owner, owner);

	return (other_dog);
}
