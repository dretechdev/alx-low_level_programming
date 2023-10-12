#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function adds all parameters passed
 * @n: This is the number of arguments passed
 *
 * Return: The sum of all passed arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int w;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (w = 0; w < n; w++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
