#include "holberton.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
void print_alphabet(void)                       {                                                       char i;                                 
        for (i = 'a'; i <= 'z'; i++)                    {
		for (j = 0; j <= 10; j++)
		{
		_putchar(i);
		}
        }                                       _putchar('\n');
}
