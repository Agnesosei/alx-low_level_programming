#include "main.h"

/**
 * _strlen_recursion - Returns length of a string.
 * @s: string to calculate
 *
 * Return: length of string.
 */

int _strlen_recursion(char *s)
{

	if (*s)
/*
	{
		len++;
		len = len +  _strlen_recursion(s + 1);
	}

*/
		return 1 + _strlen_recursion(s+1);
}
