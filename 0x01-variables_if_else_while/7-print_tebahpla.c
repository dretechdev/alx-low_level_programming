#include <stdio.h>

/**
 * main - The main entry point
 *
 * Return: 0 when the code runs
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
