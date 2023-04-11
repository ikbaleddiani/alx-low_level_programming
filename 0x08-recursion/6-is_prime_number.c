#include "main.h"

/**
 * is_prime - detects if an input number is prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime(int n, int c)
{
	if (c == 1)
		return (1);
	if (n % c == 0 && c > 0)
		return (0);
	return (is_prime(n, c - 1));
}

/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, n - 1));
}
