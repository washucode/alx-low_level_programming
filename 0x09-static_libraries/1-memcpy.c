#include "main.h"

/**
 * _memcpy - function to copy...
 * @dest: pointer
 * @src: pointer
 * @n: length of bites to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
