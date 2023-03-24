#include "main.h"
/**
 * more_numbers - 10 times the numbers, from 0 to 14
 *
 * Return: print 10 number
 */
void more_numbers(void)
{
int i, j = 0;
while (j < 10)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
}
_putchar ('\n');
j++;
}
}
