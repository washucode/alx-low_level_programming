#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string
 *
 * @dest : resulting string
 * @src : string to concated
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int d;

	int s;

	d = 0;

	for (d = 0 ; dest[d] != '\0'; d++)
	{
	}

	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
