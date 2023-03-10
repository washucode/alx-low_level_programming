#include <stdio.h>
#include <stdlib.h>

/**
 * main -  returns the multiplication of twoargumentnts
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return:1 or 0
 */

int main(int argc, char *argv[])
{
	int  mult = 0;

	int n1 = 0, n2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 =  atoi(argv[1]);
		n2 = atoi(argv[2]);
		mult = n1 * n2;
		printf("%d\n", mult);
	}
	return (0);
}
