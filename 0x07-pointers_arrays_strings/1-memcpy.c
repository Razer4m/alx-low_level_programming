#include "main.h"
/**
 * _memcpy - Copies n bytes from the memory are src to the memory area dest
 * @dest: Pointer tot eh destination memory area.
 * @src: Pointer to the source memeoy area.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		i++;
	}
	return (dest);
}
