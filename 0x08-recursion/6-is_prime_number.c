#include "main.h"
/**
 * is_prime - find primes
 * @n : interger to examine
 * @i : range
 * Return: 1 or 0
 */


int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - find primes
 * @n : interger to examine
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
