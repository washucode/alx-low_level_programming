#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *@str: the string to print.
 */

void puts2(char *str)
{
	int c;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		_putchar(str[c]);
	}
	_putchar(10);
}
