#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'e'; i++ )
	{
		putchar(i);
	}
	for (i > 'e'; i < 'q'; i++)
	{
		putchar(i);
	}
	for (i > 'q'; i <= 'z'; i++)
	{
		putchar(i)
	}
	putchar('\n')
	return (0);
}
