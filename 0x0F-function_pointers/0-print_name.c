#include "function_pointers.h"

/**
 * print_name - prints name using function pointers
 * @name: name to be printed
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
