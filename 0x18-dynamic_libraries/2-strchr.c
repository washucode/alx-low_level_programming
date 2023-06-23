#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be located
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c) /* find matching character */
		i++;

	if (s[i] == c) /* if matching character is found */
		return (s + i);

	return (0);
}
