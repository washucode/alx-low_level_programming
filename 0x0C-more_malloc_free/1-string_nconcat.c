#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 *
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *na;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int t_len = 0;
	unsigned int i1 = 0;
	unsigned int i2 = 0;
	unsigned int i3 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	if (s2_len > n)
		s2_len =  n;
	t_len = s1_len + s2_len;

	na = malloc(sizeof(char) * (t_len + 1));

	if (na == NULL)
		return ('\0');

	for (i1 = 0; i1 < s1_len ; i1++)
		na[i3++] = s1[i1];

	for (i2 = 0; i2 < s2_len ; i2++)
		na[i3++] = s2[i2];

	na[i3] = '\0';
	return (na);
}
