#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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

	char *a;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(p, char *);

		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
