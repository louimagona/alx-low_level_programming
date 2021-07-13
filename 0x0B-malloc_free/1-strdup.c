#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to allocated memory
 * @str: string to be supplied
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
    char *src;
    char *p;
    int len = 0;

    while (str[len])
        len++;
    src = malloc(len + 1);
    p = src;
    while (*str)
        *p++ = *str++;
    *p = '\0';
    return src;
    free(src);
}
