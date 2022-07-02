#include "dog.h"

/**
 * new_dog - Creates a new dog.
 *
 * @name: Name of the new dog.
 *
 * @age: Age of the new dog.
 *
 * @owner: Owner of the new dog.
 *
 * Return: Pointer to a new dog or NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int z, size_name = 0, size_owner = 0;

	for (z = 0; name[z]; z++)
		;
	size_name = z + 1;
	for (z = 0; owner[z]; z++)
		;
	size_owner = z + 1;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(size_name * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(size_owner * sizeof(char));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (z = 0; z < size_name - 1; z++)
		dog->name[z] = name[z];
	dog->name[z] = '\0';

	dog->age = age;

	for (z = 0; z < size_owner - 1; z++)
		dog->owner[z] = owner[z];
	dog->owner[z] = '\0';

	return (dog);
}
