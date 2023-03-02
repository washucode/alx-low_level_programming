#include "main.h"

/**
 * leet - function that encodes string to 1337
 *
 * @n : string
 * Return: String
 */

char *leet(char *n)
{

	int l_len, m_len;

	int i = 0;

	char l[ ] = "aAeEOoTtLl";

	char m[ ] = "4433007711";

	while (n[i] != '\0')
	{
		l_len = 0;
		m_len = 0;
		while (l[l_len] != '\0')
		{
			if (n[i] == l[l_len])
			{
				n[i] = m[m_len];
			}
			l_len++;
			m_len++;
		}
		i++;
	}
	return (n);
}
