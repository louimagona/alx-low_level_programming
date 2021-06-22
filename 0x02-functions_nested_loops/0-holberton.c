#include "holberton.h"
/**
 * main - Print string holberton.
 *
 * Return: 1.
 */
int main(void)
{
	char holberton[] = "Holberton";
	unsigned int i;

	for (i = 0; i < sizeof(holberton); i++)
	{
		_putchar(holberton[i]);
	}
	return (0);
}
