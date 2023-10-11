#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - This function prints a name
 * @name: This is the name to be printed
 * @f: This is the actual function parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
