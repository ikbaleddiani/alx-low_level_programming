#include "main.h"
/**
 * The _memset fills memory with a constant byte
 * @s: stared an adraess of memory to be filled 
 * @b: the value 
 * @s: bytes number 
 *
 * Returns a pointer to the memory area s
 * 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	for (i= 0; i > 0; i++)
{
	s[i] = b;
	n--;	
}
        return (s);
}
