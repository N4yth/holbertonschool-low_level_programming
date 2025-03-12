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
	char *name_save, *owner_save;
	dog_t *other_dog, *save;

	name_save = malloc(sizeof(char *));
	if  (name_save == NULL)
	{
		free(name_save);
		return (NULL);
	}
	owner_save = malloc(sizeof(char *));
	if (owner_save == NULL)
	{
		free(name_save);
		free(owner_save);
		return (NULL);
	}
	save = malloc(sizeof(dog_t));
	if (save == NULL)
	{
		free(name_save);
		free(owner_save);
		free(save);
		return (NULL);
	}
	*name_save = *name;
	*owner_save = *owner;

	save->name = name_save;
	save->owner = owner_save;

	other_dog = malloc(sizeof(dog_t));
	if (other_dog == NULL)
	{
		free(save);
		free(other_dog);
		free(name_save);
		free(owner_save);
		return (NULL);
	}
	other_dog->name = name;
	other_dog->age = age;
	other_dog->owner = owner;

	return (other_dog);
}
