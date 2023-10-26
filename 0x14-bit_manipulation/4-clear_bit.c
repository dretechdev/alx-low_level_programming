#include "main.h"

/**
 * clear_bit - This program sets the value of a bit to 0
 * at a given index
 * @n: This is the parameter passed
 * @index: This is the index
 * Return: 1 on success OR -1 on ERROR
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
