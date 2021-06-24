#include "holberton.h"

/**
*_isdigit - check if c is a digit between 0 and 9.
*@n: the integer to be supplied by user.
*Return: Always 0.
*/

int _isdigit(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 0 && c <= 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
