#include <stdio.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/**
	 * Since argc will not be used in this particular function,
	 * we assign void into it so as to allow us compile with
	 * the unused variable
	 *
	 * Another way of doing this is by including __attribute__ in the code
	 * above, just after the data type.
	 * int main(int __attribute__(unused)  argc, char *argv[])
	 */
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
