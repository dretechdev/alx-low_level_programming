#include "main.h"

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian is found OR 1 if small endian is found
 */

int get_endianness(void)
{
	int i = 1;
	char *j;

	j = (char *)&i;
	return (*j);
}
