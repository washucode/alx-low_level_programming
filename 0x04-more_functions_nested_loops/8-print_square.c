#include "main.h"
/**
*print_square - prints a diagonal
*@size:parameter
*Return:returns nothing
*/

void print_square(int size)
{
	int i, s;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (s = 1 ; s < size ; s++)
				_putchar(35);
			_putchar(35);
			_putchar(10);
		}
	}
}
