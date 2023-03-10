#include "main.h"
/**
 * _islower - checks is an alphabet is lowercase
 *
 * @c: Character to be checked
 * Return: return 1 if lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
