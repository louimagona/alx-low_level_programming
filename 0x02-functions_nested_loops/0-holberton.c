#include "holberton.h"
/**
 * main - Print string holberton.
 *
 * Return: 1.
 */
int main(void)
{
	char holb[] = "Holberton";
	unsigned int i;

	for (i = 0; i < sizeof(holb); i++)
	{
		_putchar(holb[i]);
	}
_putchar('\n');
return (0);
}
