#include "function_pointers.h"

/**
 * prints - prints name character at a time
 *@name: string literal used as func parameter
 * Return: nothing
 */
void prints(char *name)
{
	unsigned int i;

	i = 0;
	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
}

/**
 * print_name - prints name using function pointers
 * @name: name to be printed
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f = prints;
	(*f)(name);
}
