#include "main.h"
/**
 * The _memset -  fill is assemble of  memory with a constant value
 * @s: stared an adraess of memory to be filled 
 * @b: required the value 
 * @s: bytes number need to change
 *
 * Returns a pointer to the memory area @s 
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
