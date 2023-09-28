#include "main.h"

/**
 * sqrt_a - Returns the natural square root of a number
 * @a: the input number
 * @b: iterator
 *
 * Return: the natural square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - Calculates natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
