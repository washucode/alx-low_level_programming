#include "main.h"

/**
 * s_root - returns the natural square root of a number.
 *
 * @n : integer
 * @x : integer
 * Return: squareroot
 */

int s_root(int n, int x)
{
	if (n < 0)
		return (-1);
	if ((x * x) > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (s_root(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n : integer
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (s_root(n, 1));
}


