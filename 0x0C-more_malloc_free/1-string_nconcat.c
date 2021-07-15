#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatetenate two strings upto n
 * @s1: string 1
 * @s2: string 2
 * @n: limit of concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, l, m;
	char *ptr;

	i = 0;
	while (s1[i])
		i++;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	l = i;
	m = 0;
	while (m < n)
	{
		ptr[l] = s2[m];
		l++;
		m++;
	}
	return (ptr);


}
