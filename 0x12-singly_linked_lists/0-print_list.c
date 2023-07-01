#include "lists.h"

/**
 * print_list - elements of a list_t list
 * @h: start of the list_t
 *
 * Return: num of nodes in h
 */

size_t print_list(const list_t *h)
{
	int nds = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			nds++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			nds++;
			h = h->next;
		}
	}

	return (nds);
}
