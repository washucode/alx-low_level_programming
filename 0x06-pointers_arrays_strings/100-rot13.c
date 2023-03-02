#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13.
 * @s : string to be encoded
 * Return: string
 */
char *rot13(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
	{
		if ((s[r] >= 'a' && s[r] <= 'm') || (s[r] >= 'A' && s[r] <= 'M'))
		{
			s[r] += 13;
		}
		else if ((s[r] >= 'n' && s[r] <= 'z') || (s[r] >= 'N' && s[r] <= 'Z'))
		{
			s[r] -= 13;
		}
		r++;
	}
	return (s);
}
