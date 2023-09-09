#include <stdio.h>

/**
 * main - Here is the entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		if (d == 9)
			putchar(d + '0');
		else
		{
			putchar(d + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
