#include "main.h"

/**
* _strstr - function
* @haystack: pointer
* @needle: pointer
* Return: 0
*/

char *_strstr(char  *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (*b == 0)
	{
		return (haystack);
	}

	for (; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
		{
			continue;
		}

		a = haystack;

		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}

		b = needle;
	}

	return (0);
}
