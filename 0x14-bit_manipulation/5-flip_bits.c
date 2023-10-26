#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * from one to another bit
 * @n: This is the first number
 * @m: This is the second number
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, countbits = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			countbits++;
	}
	return (countbits);
}
