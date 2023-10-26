#include "main.h"

/**
 * set_bit - This program sets the value of a bit to 1 at a given index
 * @n: THis is the number to set
 * @index: This is the index at which the bit is set
 * Return: 1 on success or -1 if an ERROR is found
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
