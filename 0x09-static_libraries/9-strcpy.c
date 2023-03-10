#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int l, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (l = 0; l <= length ; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}
