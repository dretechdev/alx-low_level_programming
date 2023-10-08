#include "main.h"
#include <stdlib.h>

/**
 * array_range - This is a function that creates an array of integers
 * @min: The minimun value
 * @max: The maximum value
 * Return: integer pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int i, j;
	int *b;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	b = malloc(sizeof(int) * j);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		b[i] = min;
		min++;
	}
	return (b);
}
