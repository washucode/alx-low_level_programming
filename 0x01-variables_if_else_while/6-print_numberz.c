#include <stdio.h>
/**
 * main - Entry point of the program
 * Description - Print all base 10 single digit number starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char  x = '0';

	for (x = '0' ; x <= '9' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
