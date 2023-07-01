#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: find the length of string.
 * Return: (Success)
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}


list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = (malloc(sizeof(list_t)));
	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	if (*head == NULL) /*Assign the string and adjust pointers*/
	{
		n_node->next = *head;
		n_node->str = strdup(str);
		n_node->len = _strlen(str);
		*head = n_node;
	} 
	/*else
	{
		n_node->next = *head;
		n_node->str = strdup(str);
		n_node->len = _strlen(str);
		*head = n_node;
	}*/
	return (*head);
}
