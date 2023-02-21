#include "main.h"

/**
 *  print_times_table -  prototype prints n times table
 * Description : this program will print n times table
 * @n : integer to be used for printing n times table
 *
 * Return: no return value
 */

void print_times_table(int n)
{
	int num, multiplied, multiple;

	if (n <= 15  && n >= 0)
	{
		for (num = 0 ; num <= n ; num++)
		{
			_putchar('0');
			for (multiple = 1 ; multiple <= n ; multiple++)
			{
				_putchar(44);
				_putchar(32);
				multiplied = num * multiple;

				if (multiplied <= 99)
				{
					_putchar(32);
				}

				if (multiplied <= 9)
				{
					_putchar(32);
				}
				else if (multiplied >= 100)
				{
					_putchar((multiplied / 100) + '0');
					_putchar((multiplied / 10) % 10  + '0');
				}
				else
				{
					_putchar((multiplied / 10) + '0');
				}
				_putchar((multiplied % 10) + '0');
			}
			_putchar(10);
		}
	}
}
