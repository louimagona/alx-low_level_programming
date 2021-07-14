#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1 passed as argument 1
 * @s2: string 2 passed as argument 2
 * Return: pointer to the allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m, len;

	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	len = i + j;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	l = i;
	m = 0;
	while (l < len)
	{
		p[l] = s2[m];
		l++;
		m++;
	}
	return (p);
}
