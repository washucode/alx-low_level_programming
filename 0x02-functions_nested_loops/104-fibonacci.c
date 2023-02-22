#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
unsigned long int n1 = 0, n2 = 1, num;

int i;

for (i = 1; i <= 98; i++)
{
num = n1 + n2;
if (i != 98)
{
printf("%lu, ", num);
}
else
{
printf("%lu\n", num);
}
n1 = n2;
n2 = num;
}
return (0);
}
