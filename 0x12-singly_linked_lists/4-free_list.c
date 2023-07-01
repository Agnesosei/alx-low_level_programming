#include "lists.h"

/**
 * free_list - Free list_t.
 * @head: Pointer to list_t.
 * return: void
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
