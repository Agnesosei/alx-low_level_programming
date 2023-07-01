#include "lists.h"

/**
 * list_len - find num of nodes
 * @h: pointer to head of linked list
 *
 * Return: num of nodes
 */

size_t list_len(const list_t *h)
{
	int nds = 0;

	while (h != NULL)
	{
		nds++;
		h = h->next;
	}

	return (nds);
}
