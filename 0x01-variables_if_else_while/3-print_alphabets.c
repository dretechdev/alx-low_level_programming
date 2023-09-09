#include <stdio.h>
/**
 * main - This is our entry point
 * Return Zero to signify a completed procee
 */

int main(void)
{
	char x = 'a';
	char y = 'A';
	while (x <= 'z') {
		putchar(x);
		x++;
	}
	while (y <= 'A') {
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
