#include "main.h"

/**
 * print_alphabet - This prints the alphabets
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		_putchar(start);
		_putchar('\n');
	}
}
