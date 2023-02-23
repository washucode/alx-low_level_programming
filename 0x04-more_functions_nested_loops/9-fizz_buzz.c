#include "main.h"
#include <stdio.h>
/**
 * main- entry point
 *
*Return:returns nothing
*/

int main(void)
{
int  m;
while (m++ < 100)

if ((m % 3 == 0) && (m % 5 == 0))
printf("FizzBuzz ");

else if ((m % 3) == 0)
printf("Fizz ");

else if ((m % 5) == 0)
{
if (m != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", m);

printf("\n");
return (0);
}
