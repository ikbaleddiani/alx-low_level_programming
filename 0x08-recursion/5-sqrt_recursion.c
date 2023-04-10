#include "main.h"
/**
 * square - find the natural square of 'n' if exists
 * @n: int number
 * @sq: square of 'n' if exists
 *
 * Return: the square
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int number
 *
 * Return: natural square root of 'n'
 * else -1 if 'n' does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
