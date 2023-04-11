#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 * @size: size of array
 * @c: char to assign
 * 
 * Description: create array of size size and assign char c
 * 
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
return (NULL);

str = malloc(size * sizeof(char));

if (str == NULL)
        return (NULL);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}
