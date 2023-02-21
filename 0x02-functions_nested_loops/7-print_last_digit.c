#include "main.h"
/**
 * print_last_digit - main prototype function
 *
 * @n : character to be checked
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');

	return (x);
}
