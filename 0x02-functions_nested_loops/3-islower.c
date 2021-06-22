#include "holberton.h"
/**
 * _islower - checks if a character is lowercase
 *takes an argument c of type int
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
