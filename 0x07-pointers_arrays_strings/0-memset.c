#include "main.h"
/**
 * _memset - fill is assemble of  memory with a constant value
 * @s: stared an adraess of memory to be filled 
 * @b: the required value 
 * @s: number of bytes need to change
 *
 * Return: change array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	
	for (i= 0; n > 0; i++)
	{

		s[i] = b;
		n--;	
	}
        return (s);
}
