#include "main.h"

/**
 * times_table - prototype
 *
 *
 *
 * Result: none
 */

void times_table(void)
{
	int num, multiple, multiplied;

	for (num = 0;  num <= 9; num++)
	{
		_putchar('0');
		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(44);
			_putchar(32);
			multiplied = num * multiple;
			if (multiplied <= 9)
			{
				_putchar(32);
				_putchar(multiplied + '0');
			}
			else
			{
				_putchar((multiplied / 10) + '0');
				_putchar((multiplied % 10) + '0');
			}
		}
		_putchar(10);
	}
}
