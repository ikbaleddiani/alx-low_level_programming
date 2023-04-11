#include "main.h"

/**
 * is_prime - detects if an input number is prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int prime(int n, int nb)
{
	if (nb == 1)
		return (1);
	if (n % nb == 0 && nb > 0)
		return (0);
	return (prime(n, nb - 1));
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
