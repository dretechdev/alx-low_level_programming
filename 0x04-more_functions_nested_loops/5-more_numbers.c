#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(y / 10 + '0'); /*Prints the first digit in '10" */
			_putchar(y % 10 + '0'); /*prints the last digit in '10' */
		}
		_putchar('\n');
	}
}
