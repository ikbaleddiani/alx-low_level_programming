#include"main.h"

 /**
 * _strchr - a function that locates a character in string
 * @s: pointer to string.
 * @c: character that locate in string.
 *
 * Return: first occurence of the charatcer or null if not found
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
