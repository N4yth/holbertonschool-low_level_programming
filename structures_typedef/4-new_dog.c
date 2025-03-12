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
	dog_t *other_dog, *save_val;

	save_val = malloc(sizeof(dog_t));
	if (save_val == NULL)
	{
		free(save_val);
		return (NULL);
	}
	save_val->name = name;
	save_val->owner = owner;

	other_dog = malloc(sizeof(dog_t));
	if (other_dog == NULL)
	{
		free(other_dog);
		free(save_val);
		return (NULL);
	}
	other_dog->name = name;
	other_dog->age = age;
	other_dog->owner = owner;

	return (other_dog);
}
