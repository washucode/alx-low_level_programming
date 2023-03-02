#include "main.h"
/**
 * cap_string -function that capitalizes all words of a string.
 * @c: string.
 * Return: s.
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if ((c[i - 1] == ' ' || c[i - 1] == '\n'
		|| c[i - 1] == '\t' || c[i - 1] == ','
		|| c[i - 1] == ';'  ||  c[i - 1] == '!'
		|| c[i - 1] == '?' || c[i - 1] == '"'
		|| c[i - 1] == '('  ||  c[i - 1] == ')'
		|| c[i - 1] == '{'  ||  c[i - 1] == '}'
		|| c[i - 1] == '.')
		&& (c[i] >= 'a' && c[i] <= 'z'))
		{
			c[i] = c[i] - 32;
		}
		else if ((c[0] >= 97 && c[0] <= 122))
		{
			c[0] = c[0] - 32;
		}
		else
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
