#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	p = malloc(sizeof(dog_t));
	if (p)
	{
		(*p).name = name;
		(*p).age = age;
		(*p).owner = owner;
	}
	else
	{
		return (NULL);
	}
	return (p);
}
