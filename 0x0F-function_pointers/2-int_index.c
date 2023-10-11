#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - This function strictly searches for an integer
 * @array: This is the array to search integer from
 * @size: This is the actual size of the array
 * @cmp: This is the function pointer
 * Return: The index of the character that has matched or return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
