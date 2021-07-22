#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print all parameters as ints
 * @n: number of parameters
 * @separator: string between each number
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;

	unsigned int i;

	va_start(p, n);


	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(p, int));
		}
		else
		{
			printf("%d", va_arg(p, int));
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
