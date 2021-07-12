#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print its name
 * @argc: count number of cml arguments
 * @argv: array size of the arguments
 * Return: 0 as exit success
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
