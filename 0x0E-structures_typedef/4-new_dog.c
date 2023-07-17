#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Return: Pointer to the newly created dog
 *         or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, nm, ownr;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (nm = 0; name[nm]; nm++)
	{
		;
	}
	for (ownr = 0; owner[ownr]; ownr++)
	{
		;
	}
	new_dog->name = malloc(nm + 1);
	new_dog->owner = malloc(ownr + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < nm; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (i = 0; i < ownr; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->owner[i] = '\0';
	return (new_dog);
}
