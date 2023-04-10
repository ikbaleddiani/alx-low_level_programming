#include "main.h"

/**
 * _print_rev_recursion - prints the string in reverse
 * @s: string
 * Return: always return
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
