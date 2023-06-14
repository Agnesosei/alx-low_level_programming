#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new memory space allocated
 *           
 * @str: string to copy
 *
 * Return: NULL if malloc fails
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++);
	i++;

	cpy = malloc(i * sizeof(char)); /*allocate memory*/

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i-1; j++)
	{
		cpy[j] = str[j];
	}

	return (cpy);
}
