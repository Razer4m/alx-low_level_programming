#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the elements of the struct dog
 * pointed to by @d. If @d is NULL, it prints nothing.
 * If an element of @d is NULL, it prints "(nil)" instead of the NULL value.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
