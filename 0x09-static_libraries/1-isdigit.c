#include "main.h"

/**
 * _isdigit - prototype that checks is c is a digit
 *
 * @c : digit to be checked
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
