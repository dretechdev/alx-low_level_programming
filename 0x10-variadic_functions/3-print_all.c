#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - This function prints just anything
 * @format: format is the list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int num = 0;
	char *str, *sep = "";

	va_list display;

	va_start(display, format);

	if (format)
	{
		while (format[num])
		{
			switch (format[num])
			{
				case 'c':
					printf("%s%c", sep, va_arg(display, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(display, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(display, double));
					break;
				case 's':
					str = va_arg(display, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					num++;
					continue;
			}
			sep = ", ";
			num++;
		}
	}
	printf("\n");
	va_end(display);
}
