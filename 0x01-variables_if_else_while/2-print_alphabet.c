#include  <stdio.h>
/**
 * main - Entry point of the program
 * Description: print all letters in small caps
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int myChar;

	for (myChar = 'a' ;  myChar <= 'z' ; myChar++)
		putchar(myChar);
	putchar('\n');
	return (0);
}
