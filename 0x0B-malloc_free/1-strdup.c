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

	while (str[len])
	{
		len++;
	}
	cpy = malloc(len + 1);
	ptr = cpy;
	while (*str)
	{
		*ptr++ = *str;
	}
	*ptr = '\0';
	return (ptr);
	free(ptr);
}

