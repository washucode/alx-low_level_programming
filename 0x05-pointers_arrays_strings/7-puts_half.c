#include "main.h"

/**
 * puts_half - prints the second half of a string.
 *@str: string to evaluate.
 */

void puts_half(char *str)
{
	int length;

	int l;

	int x;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	l = (length - 1) / 2;
	for (x = l + 1; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}
