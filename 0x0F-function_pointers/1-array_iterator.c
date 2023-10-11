#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This function executes a function given as a
 * parameter on each element of an array.
 * @array: This parameter is the array
 * @size: This parameter is the size
 * @action: This is the function to be performed on
 * each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
