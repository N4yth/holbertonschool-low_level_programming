#include "lists.h"

/**
 * list_len - count the number of element (node)
 *
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
