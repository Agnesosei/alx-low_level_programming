#include "main.h"

/**
 * _strncpy - Copies a number of bytes from string src into dest
 * @dest: the string copy to copy to
 * @src: The source string.
 * @n: number of bytes to copied from src.
 *
 * Return: pointer to final result  string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int strncpy = 0, src_cnt = 0;

	while (src[strncpy++])
	{
		src_cnt++;
	}

	for (strncpy = 0; src[strncpy] && strncpy < n; strncpy++)
	{
		dest[strncpy] = src[strncpy];
	}

	for (strncpy = src_cnt; strncpy < n; strncpy++)
	{
		dest[strncpy] = '\0';
	}

	return (dest);
}
