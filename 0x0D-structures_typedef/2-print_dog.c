#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_dog - functon that prints a struct dog
 *@d: d is a pointing to struct dog
 *Return: returns nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

