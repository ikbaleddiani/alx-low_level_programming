#include"main.h"

 /**
 * _strchr - a function that locates a character in string
 * @s: string.
 * @c: character that locate to string.
 *
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
