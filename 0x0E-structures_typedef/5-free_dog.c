#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d: pointer of struct
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
