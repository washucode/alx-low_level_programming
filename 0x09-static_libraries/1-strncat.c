#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src:  string to be concated
 * @dest: final string
 * @n: number
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
