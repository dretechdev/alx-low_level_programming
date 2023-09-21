#include "main.h"

/**
 * _strncpy - this function copies strings
 * @dest: this is the destination
 * @src: this is the source
 * @n: number of byte to concatenate
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
