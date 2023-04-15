#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input
 * @src: memory area
 * @n: bytes from memory area
 *
 * Return: a pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
