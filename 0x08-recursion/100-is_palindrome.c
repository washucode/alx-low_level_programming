#include "main.h"

/**
 * _rev_string - funtion to print string in reverse
 *@s: string to be printed
 *
 * Return: no return
 */
void _rev_string(char *s)
{
 	if (*s)
	{
		_rev_string(s + 1);
		return (*s);
	}
	return (0);
}

/**
 * _string - funtion to print string in reverse
 *@s: string to be printed
 *
 * Return: no return
 */

void _string(char *s)
{
	if (*s)
	{
		return (*s);
		_string(s + 1);
	        
	}
	return (0);
}

/**
 * is_palindrome - funtion to print string in reverse
 *@s: string to be printed
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (_string(s) == _rev_string(s))
		return (1);
	if (_string(s) == "")
		return (1);
	else
		return (0);
}



