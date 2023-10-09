#include "main.h"

/**
 * _isdigit - A function that checks for a digit
 * (0 through 9 using ASCII code)
 * @c: Character to check for
 * Return: 1 on succcess or 0 on failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
