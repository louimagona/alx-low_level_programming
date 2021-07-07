#include "holberton.h"

/**
 * _puts_recursion - prints a string on terminal
 *@s: string supplied as parameter
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
