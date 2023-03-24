#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
	return;
}	
for
(int i = 0; i < n; i++) 
{
for
(int j = 0; j < i; j++) 
{
	_putchar(' ');
}
        _putchar('\\');
        _putchar('\n');
}
}
