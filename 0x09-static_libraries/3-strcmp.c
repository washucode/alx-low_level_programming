#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1 : first string
 * @s2 : second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
  /*_strcmp: return < 0 if s1 < s2, 0 if s1 == s2, > 0 if s1 > s2*/
	int x;

	x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0')
			return (0);
		x++;
	}
	return (s1[x] - s2[x]);
}
