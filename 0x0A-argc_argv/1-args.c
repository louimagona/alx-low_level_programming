#include "holberton.h"
#include <stdio.h>

/**
 * main - print its name
 * @argc: count number of cml arguments
 * @argv: array size of the arguments
 * Return: 0 as exit success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count, args;

	args = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			args += 1;
		}
	}
	printf("%d\n", args);
	return (0);
}
