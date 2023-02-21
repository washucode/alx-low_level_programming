#include "main.h"
/**
 * main - Entry point of application
 *
 * Return: Return 0
 */
int main(void)
{
	char letter[10] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(letter[x]);
	}
	_putchar(10);
	return (0);
}
