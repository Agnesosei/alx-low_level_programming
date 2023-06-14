#include <stdio.h>

/**
 * main - Print argument count aside the program name
 * @argc: Argument count
 * @argv: Array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
