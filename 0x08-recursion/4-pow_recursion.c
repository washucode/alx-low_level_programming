#include "main.h"
/**
 * _pow_recursion - rns the value of x raised to the power of y.
 * @y : integer
 * @x : integer
 * Return: power or -1
 */

int _pow_recursion(int x, int y)
{
	if (y <  0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
