#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is our main function
 * @argc: This is the argument count
 * @argv: This is the argument vector
 * Return: 0
 */

int main(int __atttribute__((unused)) argc, char *argv[])
{
	int (*oprt)(int, int);
	if (argc != 4)
	{
		printf("Error\n'");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
