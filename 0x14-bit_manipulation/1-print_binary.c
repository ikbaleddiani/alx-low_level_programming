#include <stdio.h>
#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: num to print
 *
 * Return: (void)
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8, j = 0;

	while (i)
	{
		if (n & 1L << --i)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
