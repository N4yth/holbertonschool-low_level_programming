#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - calcule the number of node from a doubly linked list
 *
 * @h: the head of the doubly linked list
 *
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
