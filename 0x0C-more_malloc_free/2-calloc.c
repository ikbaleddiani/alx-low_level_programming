#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	size = nmemb * size;
	for (i = 0; i < size; i++)
		p[i] = 0;
	return (p);
}
