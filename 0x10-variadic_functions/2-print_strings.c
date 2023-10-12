#include "variadic_functions.h"

/**
 * print_strings - This function prints strings
 * @separator: This is the string separator
 * @n: This is the number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *y = va_arg(arg, char *);

		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
