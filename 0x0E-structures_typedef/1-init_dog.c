#include "main.h"
#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a struct dog with provided values
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Description: This function initializes the members of the struct dog
 * pointed to by @d with the provided values for @name, @age, and @owner.
 * If @d is NULL, the function does nothing.
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
