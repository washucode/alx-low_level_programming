#include <stdio.h>
/**
 * main - prints sum o even fibonnaci
 * Return: return 0
 */


int main(void)
{
unsigned long int1 = 0, int2 = 1, int3 = 0, sum = 0;
while (int3 <= 4000000)
{
int3 = int1 + int2;
int1 = int2;
int2 = int3;

if ((int1 % 2) == 0)
sum += int1;
}
printf("%ld\n", sum);
return (0);
}
