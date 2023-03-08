#include "main.h"

/**
 * is_prime - checks for prime number
 * @n: number to be checked
 * @c: number to iterate through
 *
 * Return: 1 if prime else 0
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, c + 1));
}

/**
 * is_prime_number - checks if a number iss prime
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}
