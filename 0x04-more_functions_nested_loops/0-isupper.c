#include "main.h"
/**
 * _isupper - prototype to check if character is uppercase
 *
 * @c :  character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

