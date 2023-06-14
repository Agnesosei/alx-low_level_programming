#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers, followed by a new line.
 * @argc: Argument count
 * @argv: Array of pointers to  arguments.
 * Return: If two arguments - 0.
 *         If not two arguments - 1.
 */

int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}
