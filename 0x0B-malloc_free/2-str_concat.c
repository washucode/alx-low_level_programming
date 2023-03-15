#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: A string to be concatenated
 *
 * @s2: A string to be concatenated
 *
 * Return: Pointer to newly allocated memory
 * which is equal to @s1 then @s2 /
 * NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	char *mem_all;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_len) != '\0')
		s1_len++;

	while (*(s2 + s2_len) != '\0')
		s2_len++;

	mem_all = malloc(1 + (s1_len * sizeof(*s1))  + (s2_len * sizeof(*s2)));

	if (mem_all == NULL)
		return ('\0');

	for (x = 0 ; x < s1_len ; x++)
		mem_all[x] = *(s1 + x);

	for (y = 0; y < s2_len ; y++, x++)
		mem_all[x] = *(s2 + y);

	return (mem_all);

}
