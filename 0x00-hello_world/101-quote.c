#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point of this program
 *
 * Return: Return 1
 */

int main(void)
{
		char *mS = " and that piece of art is useful \" - Dora Korpar, 2015-10-19\n";

		write(2,  mS, 62);
		return (1);
}
