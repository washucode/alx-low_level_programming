#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (s = 1 ; s < i ; s++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	}
}
