#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string to search
 * @needle: pointer to substring to search for
 * Return: pointer to beginning of located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	match = 0;
	for (i = 0; haystack[i] != '\0'; i++) /* iterate through haystack */
	{
		for (j = 0; needle[j] != '\0'; j++) /* iterate through needle */
		{
			if (haystack[i + j] == needle[j]) /* match found */
			{
				match = 1;
			}
			else /* match not found */
			{
				match = 0;
				break;
			}
		}
		if (match == 1) /* if match found */
			return (haystack + i);
	}
	return (0);
}
