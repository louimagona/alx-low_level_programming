#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main()
{
	int i;
	char c[] = "FizzBuzz";
	char d[] = "Buzz";
	char e[] = "Fizz"
	
	for (i = 0; i <= 100; i++)
	{
		if (i < 100)
		{
			if (i % 15 == 0)
			{
				printf("%c ", c);
			}
			else if (i % 5 == 0)
			{
				printf("%c ", d);
			}
			else if (i % 3 == 0)
			{
				printf("%c ", e);
			}
		}
		printf("%d", i);
	}
}
