#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to malloc
  */

char *str_concat(char *s1, char *s2)
{
	char *jns;
	int cpy = 0;
	int lent = 0;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		lent++;

	jns = malloc(sizeof(char) * lent +1);

	if (jns == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		jns[cpy++] = s1[i];

	for (i = 0; s2[i]; i++)
		jns[cpy++] = s2[i];

	return (jns);
}
