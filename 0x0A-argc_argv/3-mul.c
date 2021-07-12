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
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
