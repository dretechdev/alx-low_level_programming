#include "main.h"

/**
 * _isupper - This checks for lower case characters
 *
 * @c: This is the character to be checked
 * Return: 1 or 0
 */

int _isupper(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}
