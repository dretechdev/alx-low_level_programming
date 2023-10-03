#include "main.h"

/**
 * _abs - This function computes the absolute value of an integer.
 * @c: The number to be computed is c
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
