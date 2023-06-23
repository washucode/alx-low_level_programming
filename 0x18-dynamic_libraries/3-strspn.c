#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++) /* iterate through s */
	{
		for (j = 0; accept[j] != '\0'; j++) /* iterate through accept */
		{
			if (s[i] == accept[j]) /* match found */
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0') /* no match found */
			break;
	}
	return (count);
}
