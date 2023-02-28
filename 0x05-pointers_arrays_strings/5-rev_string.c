#include "main.h"
/**
 * rev_string -  reverse a string
 *
 * @s : string to be printed in reverse
 */
void rev_string(char *s)
{
	int c = 0;

	int length = 0, l;

	char s1, s2;

	for (length = 0 ; s[length]  != '\0'; length++)
	{
	}
	l = length - 1;

	while (l > c)
	{
		s1 = s[c];
		s2 = s[l];
		s[c] = s2;
		s[l] = s1;
		l--;
		c++;
	}

}
