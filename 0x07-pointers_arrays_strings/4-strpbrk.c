#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: pointer
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{

	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
