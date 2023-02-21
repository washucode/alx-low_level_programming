#include "main.h"
/**
 * _isalpha - prototype function
 * Description: check if c is a letter
 * @c :  character to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
