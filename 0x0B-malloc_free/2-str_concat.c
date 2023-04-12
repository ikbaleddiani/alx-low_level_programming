#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string
 * @s2: other string
 *
 * Rsturn: to the new stringif it passed , if it not to NULL.
 */

char *str_concat(char *s1, char *s2)
{
unsigned int size;
char *ptr, ret;

	size = 0;
		ptr = s1;
	if (s1)
		while (*ptr++)
			size++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			size++;
	else
		s2 = "";

	ret = (size + 1);
	if (!ret)
		return (NULL);

	*ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return s2;
}
