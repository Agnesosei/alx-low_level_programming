#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of characters
 * @size: size of the array
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)/*check if size is 0*/
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char)); /*allocate memory for array*/
	if (s == NULL) /*check if malloc failed*/
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
