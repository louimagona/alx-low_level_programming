#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 *@i: parameter to be supplied by user
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	else
	{
		i = i % 10;
	}
	_putchar((i % 10) + '0');
	return (i);

}
