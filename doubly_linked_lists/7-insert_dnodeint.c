#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "1-dlistint_len.c"

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
	dlistint_t *tmp_prev, *tmp_next, *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	if (current == NULL || dlistint_len(*h) < idx)
		return (NULL);
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (current);
	}
	if (dlistint_len(*h) == idx)
	{
		add_dnodeint_end(h, n);
		return (current);
	}
	while (idx - 1 > 0)
	{
		current = current->next;
		idx--;
	}
	tmp_prev = current->prev;
	tmp_next = current;
	current->prev->next = new_node;
	current = new_node;
	current->n = n;
	current->prev = tmp_prev;
	current->next = tmp_next;
	return (new_node);
}
