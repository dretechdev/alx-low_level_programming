#include <stdio.h>

/**
 * main - Our program prints all possible different combinations of two digits
 *
 * Return: 0 (Code Success)
 */

int main(void)
{
	int units = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			if (!((units == tens) || (tens > units)))
			{
				putchar(tens);
				putchar(units);
				if (!(units == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
