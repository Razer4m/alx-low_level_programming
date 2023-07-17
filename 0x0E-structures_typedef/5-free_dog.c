#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog_t
 * @d: Pointer to the dog_t to be freed
 *
 * Description: This function frees the memory allocated for a dog_t
 * pointed to by @d. It frees the memory for the name and owner strings
 * using the `free` function. Then, it frees the memory for the dog_t itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
