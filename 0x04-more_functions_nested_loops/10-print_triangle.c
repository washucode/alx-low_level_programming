#include "main.h"
/**
*print_triangle - prototype prints a triangle
*@size: size  of the triangle
*Return:returns nothing
*/

void print_triangle(int size)
{
	int s, i;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (i = 1 ; i <= size ; i++)
	{
		for (s = size - i ; s > 0 ; s--)
		{
			_putchar(32);
		}
		for (s = 0 ; s < i; s++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
