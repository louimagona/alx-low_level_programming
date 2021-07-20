#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees all dogs
 * @d: pointer that opens the gates
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
