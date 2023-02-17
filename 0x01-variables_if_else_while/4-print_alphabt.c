#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: print all letters in small caps
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		if (letter !=  'q' && letter  != 'e')
			putchar(letter);
	putchar('\n');
	return (0);
}
