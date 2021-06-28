#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
