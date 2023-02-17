#include <stdio.h>
/**
 * main - main entry
 *
 * Return: Return 0
 */
int main(void)
{
		int num;

		for (num = '0' ; num <= '9' ; num++)
			putchar(num);
			if (num == '9')
				continue;
			putchar(' , ');
			putchar(' ');
		putchar('\n');
		return (0);
}
