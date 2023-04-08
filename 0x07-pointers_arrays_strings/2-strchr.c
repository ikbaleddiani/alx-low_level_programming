#include"main.h"

 /**
 * _strchr - a function that locates a character in string
 * @s: string
 * @c: character in the  string
 *
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	
	if (*s == c)
		return (s);
	
	return ('\0');

}
