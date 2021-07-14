#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to allocated memory
 * @str: string to be supplied
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	char *p;

	int len, i;

	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	return (p);

}
