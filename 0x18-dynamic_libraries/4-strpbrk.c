#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to be searched
 * @accept: pointer to string containing bytes to be searched for
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, match;

	match = 0;
	for (i = 0; s[i] != '\0'; i++) /* iterate through s */
	{
		for (j = 0; accept[j] != '\0'; j++) /* iterate through accept */
		{
			if (s[i] == accept[j]) /* match found */
			{
				match = 1;
				break;
			}
		}
		if (match == 1)
			break;
	}
	if (match == 1)
		return (s + i);
	return (0);
}
