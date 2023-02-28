#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s : string to be printed in reverse
 */
void print_rev(char *s)
{
	int c;

	int length = 0;

	for (c = 0 ; s[c]  != '\0'; c++)
	{
		length++;
	}

	for (c = length - 1 ; s[c] != '\0' ; c--)
	{
		_putchar(s[c]);
	}
	_putchar(10);
}
