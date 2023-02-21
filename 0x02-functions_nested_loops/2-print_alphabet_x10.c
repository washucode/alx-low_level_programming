#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet 10x
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int x = 0;

	int ls;

	while (x < 10)
	{
		for (ls = 'a' ; ls <= 'z' ; ls++)
			_putchar(ls);
		x++;
		_putchar(10);
	}
}
