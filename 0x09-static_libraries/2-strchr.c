#include "main.h"

/**
 * _strchr - This function locates s chareacter in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: A pointer to the first occurence if c is located
 * otherwise, return NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
