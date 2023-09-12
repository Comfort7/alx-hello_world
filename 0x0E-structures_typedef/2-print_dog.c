#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a struct dog.
 * @d: A pointer to the struct dog to be printed.
 *
 * Description: This function prints the information of a struct dog, including
 * its name, age, and owner. If any of these elements are NULL,
 * it prints "(nil)" in place of the NULL element.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
