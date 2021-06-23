#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - print values from n to 98.
 *@n: integer to be supplied by the user.
 *@i: the iterator integer that scans the list.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;
	
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i < 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i > 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
}
