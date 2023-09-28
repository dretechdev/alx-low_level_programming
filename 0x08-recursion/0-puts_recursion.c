#include "main.h"

/**
 * _puts_recursion - This function prints string
 * @s: This is the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
