#include "holberton.h"

/**
 *_strcat - concatenate two strings.
 *@dest: pointer to string 1.
 *@str: pointer to string 2.
 * Return:  dest - pointer to long string.
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
	return (dest);
}
