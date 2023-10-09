#include "main.h"

/**
 * _isupper - A function that checks for upper case character
 * @c: This is the character to check for
 * Return: 1 on success or 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
