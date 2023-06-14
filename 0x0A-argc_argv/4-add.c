#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers,
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: If one of the numbers contains symbols that are non-digits return 1.
 *        else return 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
