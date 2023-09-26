#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: This is the memory area to be filled
 * @b: This is the character to copy
 * @n: This signifies the number of times to copy b
 *
 * Return: Returns pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
