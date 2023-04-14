#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes
 * of a string to another string
 * @s1: 1st string
 * @s2: 2d string
 * @n: number of bytes of s2
 *
 * Return: pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (n >= strlen(s2))
    {
        n = strlen(s2);
    }
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    char *result = malloc(strlen(s1) + n + 1);
    if (result == NULL)
    {
        return NULL;
    }
    int i = 0;
    while (*s1)
    {
        result[i++] = *s1++;
    }
    while (n--)
    {
        if (*s2)
	{
            result[i++] = *s2++;
        } else
	{
            break;
        }
    }
    result[i] = '\0';
    return result;
}

