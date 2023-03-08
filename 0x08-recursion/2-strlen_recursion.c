#include "main.h"
/**
 * _strlen_recursion - returns lenth
 *
 * @s : string to count length
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (!*s)
	{
		return (0);
	}
	else
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
}
