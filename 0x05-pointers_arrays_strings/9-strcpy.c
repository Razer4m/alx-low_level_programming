#include "main.h"
/**
 * _strcpy - Copying a string
 * @dest: Destination input
 * @src: Source Value
 * Return: The poiner to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (scr[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
