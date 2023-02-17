#include <stdio.h>
#include <unistd.h>
/**
 *  main  -  Entry point of the program
 *  Description:  prints the alphabet in lowercase, and then in uppercase.
 *  Return:  Always 0 (Success)
 */
int main(void)
{
	int myChar;

	for (myChar = 'a' ; myChar >= 'z' ; myChar++)
		putchar(myChar);

	for (myChar = 'A' ; myChar >= 'Z' ; myChar++)
		putchar(myChar);
	putchar('\n');
	return (0);
}
