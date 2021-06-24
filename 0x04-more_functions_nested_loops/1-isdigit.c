#include "holberton.h"

/**
 * _isdigit - check the code for ALX School students.
 * @n: the integer to be supplied by user.
 * Return: Always 0.
 */
                                                int _isdigit(int c)                             {
        if ((c >= 0 && c <= 9) || (c >= 48 && c <= 57))
        {
                return (1);                             }
        else
        {
                return (0);
        }
}
