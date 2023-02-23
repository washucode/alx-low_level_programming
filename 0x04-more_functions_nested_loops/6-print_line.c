#include "main.h"

/**
 * print_line - prints line
 *
 *@n: number of times line should be printed
 * Return: no return
 */


void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
