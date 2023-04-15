#include "main.h"
/**
 * _memset - fill is assemble of  memory with a constant value
 * @s: stared an adress of memory to be filled 
 * @b: the required value 
 * @n: number of bytes need to change
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; i++)
{
s[i] = b;
n- = 1;
}
return (s);
}
