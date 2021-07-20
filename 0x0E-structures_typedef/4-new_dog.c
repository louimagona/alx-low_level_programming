#include "dog.h"

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
		new_dog.name = name;
		new_dog.age = age;
		new_dog.owner = owner;
	}
	else
	{
		return (NULL);
	}
}
