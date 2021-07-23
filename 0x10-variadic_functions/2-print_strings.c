#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string
 * @separator: separating string 
 * @n: limit of characters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;

	unsigned int i;

	if (!n)
		return;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		if (!va_arg(p, char *))
			printf("(nil)");
		if (!separator)
			printf("%s", va_arg(p, char *));
		else
		{
			printf("%s", va_arg(p, char *));
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(p);
	printf("\n");
}
