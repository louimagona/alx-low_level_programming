#include "holberton.h"
#include <stdio.h>

/**
 * main - print its name
 * @argc: count number of cml arguments
 * @argv: array size of the arguments
 * Return: 0 as exit success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

