#include "holberton.h"

/**
 * _strncat - concatenate strings bounded.
 *@dest: pointer to string dest
 *@str: pointer to string str
 *@n : integer bound.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0';)
	{
		i++;
	}

	while (str[j] != '\0' && j < n)
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	return (dest);


}
