#include <stdio.h>

/**
 * main - Here is our entry point
 *
 * Return: 0 (Completed code)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
