#include "holberton.h"

/**
 * _strlen_recursion - print length of string.
 * @s: string to be counted
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	return (1 + _strlen_recursion(s + 1));
}

