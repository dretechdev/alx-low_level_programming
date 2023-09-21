#include "main.h"

/**
 * reverse_array - this reverses the arrays of integers
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int p;

	for (i = 0; i < n--; i++)
	{
		p = a[i];
		a[i] = a[n];
		a[n] = p;
	}
}
