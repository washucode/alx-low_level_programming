#include <stdlib.h>

/**
 * _strdup - Copies a string to new space
 *
 * @str: The string to be copied
 *
 * Return: Pointer to allocated memory containing copy of @str
 * OR NULL if @str is empty  OR
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *almem;
	unsigned int len = 0;
	unsigned int x;

	if (str == NULL)
		return ('\0');
	while (*(str + len) != '\0')
		len++;
	len++;

	almem = malloc(sizeof(*str) * len);

	if (almem == NULL)
		return ('\0');

	for (x = 0; x < len; x++)
		almem[x] = *(str + x);
	almem[x] = '\0';

	return (almem);
}
