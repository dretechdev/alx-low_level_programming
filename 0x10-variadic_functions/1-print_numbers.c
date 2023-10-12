#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - This is a function that print numbers
 * @separator: This is the string to be printed between numbers
 * @n: This is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list argument;

	va_start(argument, n);
		for (p = 0; p < n; p++)
		{
			if (separator != NULL)
			{
				printf("%d", va_arg(argument, int));
				if (p != n - 1)
					printf("%s", separator);
			}
			else
				printf("%d", va_arg(argument, int));
		}
	putchar('\n');
	va_end(argument);
}
