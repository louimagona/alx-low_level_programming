#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to allocated memory
 * @str: string to be supplied
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	char *cpy;
	char *ptr;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}
	cpy = malloc(len + 1);
	ptr = cpy;
	while (*str)
	{
		*p++ = *str;
	}
	*p = '\0';
	return (ptr);
	free(ptr);
}

