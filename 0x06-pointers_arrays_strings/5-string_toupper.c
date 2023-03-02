#include "main.h"
/**
 *  string_toupper - function that changes all lowercase to uppercase
 *  @c : string
 * Return: nothing
 */

char *string_toupper(char *c)
{
	int c_len;

	c_len = 0;
	while (c[c_len] != '\0')
	{
		if (c[c_len] >= 'a' && c[c_len] <= 'z')
		{
			c[c_len] = c[c_len] - 32;
		}
		c_len++;
	}
	return (c);
}
