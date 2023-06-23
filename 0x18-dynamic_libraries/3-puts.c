#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') /* print string char by char */
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
