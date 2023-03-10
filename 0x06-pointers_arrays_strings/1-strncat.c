#include "main.h"

/**
 * _strncat - Concatenates two strings using
 *            inputted number of bytes from src.
 * @dest: pointer to destination tobe appended upon.
 * @src: pointer to string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int strncat = 0, d_count = 0;

	while (dest[strncat++])
	{
		d_count++;
	}

	for (strncat = 0; src[strncat] && strncat < n; strncat++)
	{
		dest[d_count++] = src[strncat];
	}

	return (dest);
}
