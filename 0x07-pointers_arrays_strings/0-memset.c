/**
 * _memset- function to set memory
 *
 * @s: pointer to memory area
 * @b: byte to replace
 * @n: length of bytes to be replaced
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
