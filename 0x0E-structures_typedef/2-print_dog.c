#include <stdlib.h>
#include <stdio.h>
#include  "dog.h"

/**
 * print_dog -  function to print dog struct
 * @d : pointer for struct dog
 * Description - Print dog struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %6f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
