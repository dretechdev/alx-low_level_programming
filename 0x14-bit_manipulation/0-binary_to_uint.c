#include "main.h"

/**
 * binary_to_uint - This function converts a binary number
 * to an unsigned integer
 * @b: This is the pointer to a string containing a binary number
 * Return: Returns an unsigned integer with decimal value of binary, 0 or ERROR
 */

unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (u = 0; b[u] != '\0'; u++)
	{
		if (b[u] != '0' && b[u] != '1')
			return (0);
	}
	for (u = 0; b[u] != '\0'; u++)
	{
		number <<= 1;
		if (b[u] == '1')
			number += 1;
	}
	return (number);
}
