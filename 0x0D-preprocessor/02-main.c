#include <stdio.h>

/**
 * main - This is a prog that prints the name of the file it was compiled
 * from, followed by anew line
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
