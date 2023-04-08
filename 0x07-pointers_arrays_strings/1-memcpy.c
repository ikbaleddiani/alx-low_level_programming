#include "main.h"

/**
 * _memcpy - entry point
 * @dest: function copies
 * @src: memory area
 * @n: bytes from memory area 
 *
 * Restun: Returns a pointer to 0
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
