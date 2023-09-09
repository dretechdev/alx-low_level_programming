#include <stdio.h>

/**
 * main - This is our entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
