#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: The number
 * @...: A variable num
 *
 * Return: If n == 0 - return to 0 ,otherwise return to
 * the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}
