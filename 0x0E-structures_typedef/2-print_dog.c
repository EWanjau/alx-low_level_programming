#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - prints the structure of the dog
 * @d: input
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		print("(nil)");

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %2.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
