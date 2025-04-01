#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "1-dlistint_len.c"

/**
 * retur_to_head - return to the head of a doubly linked list
 *
 * @h: the doubly linled list where we are
 * @idx: the index of the position
 *
 * Return: nothing
 */

void retur_to_head(dlistint_t **h, unsigned int idx)
{
	while (idx)
	{
		*h = (*h)->prev;
		idx--;
	}
}

/**
 * insert_dnodeint_at_index - add a new node the the choosen coordinate
 *
 * @h: the head of the doubly linked list
 * @idx: the coordinate to put the new node
 * @n: the int of the new node
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp_prev, *tmp_next;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	if (h == NULL)
		return (0);
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	if (dlistint_len(*h) == idx)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	while (idx > i)
	{
		i++;
		if ((*h)->next == NULL)
		{
			return (NULL);
		}
		*h = (*h)->next;
	}
	tmp_prev = (*h)->prev;
	tmp_next = *h;
	(*h)->prev->next = new_node;
	*h = new_node;
	(*h)->n = n;
	(*h)->prev = tmp_prev;
	(*h)->next = tmp_next;
	retur_to_head(h, i);
	return (new_node);
}
