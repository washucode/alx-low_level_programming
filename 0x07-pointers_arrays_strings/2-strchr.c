#include "main.h"

/**
 * _strchr - prints c when found
 * @s: pointer
 * @c: char to be found
 * Return:s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s  == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
