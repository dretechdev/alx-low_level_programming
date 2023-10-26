#include "main.h"

/**
 * _pow - This calc (base ^ power)
 * @base: This is the exponential's base
 * @power: This is the power of the exponential
 * Return: The value of (base^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - This function prints a number in binary notation
 * @n: This is the number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, checker;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		checker = n & divisor;
		if (checker == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
