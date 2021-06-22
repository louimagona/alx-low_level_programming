#include "holberton.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_alphabet(void)                       {                                                       char j;
	int i;

        for (i = 0; i <= 10; i++)                    {
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(i);
		}
        }                                       _putchar('\n');
}
