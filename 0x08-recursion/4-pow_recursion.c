#include "holberton.h"

/**
 * _pow_recursion - computes power given two ints
 * @x: base integer
 * @y: power integer
 * Return: x power y 
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y-1));
}
