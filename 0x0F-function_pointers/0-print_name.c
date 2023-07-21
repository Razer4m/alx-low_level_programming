#include "function_pointers.h"
/**
 * print_name - Prints name using a function pointer
 * @name: The name to be printed
 * @f: A pointer to the function that will print the name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
