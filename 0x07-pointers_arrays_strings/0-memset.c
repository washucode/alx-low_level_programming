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
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
