#include "main.h"

/**
 * swap_int - Swap two integers
 * @a: First value
 * @b: Second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
