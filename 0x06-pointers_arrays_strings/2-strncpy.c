#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Amount of bytes from src
 * Return: Dest the Pointer string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
