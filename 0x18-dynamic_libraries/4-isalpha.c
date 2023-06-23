#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) /* if c is a letter */
		return (1);

	return (0);
}