#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: This is the character to be printed
 * Return: 1 on success OR -1 on error
 */
int _putchar(char c)
{       
        return (write(1, &c, 1));
}
