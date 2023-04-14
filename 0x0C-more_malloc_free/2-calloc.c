#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - a function that allocates memory for an array
 * @size: element of array
 * @nmemb: size of byte
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
        char *p;
        unsigned int d;

        if (nmemb == 0 || size == 0)
                return (NULL);

        p = malloc(nmemb * size);
        if (p == NULL)
                return (NULL);

        size = nmemb * size;
        for (d = 0; d < size; d++)
                p[d] = 0;

        return (p);
}	
