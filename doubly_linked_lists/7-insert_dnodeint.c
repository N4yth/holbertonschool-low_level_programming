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
	dlistint_t *current = *h;
	dlistint_t *new_node;

	if (h == NULL || dlistint_len(*h) < idx)
		return (NULL);	
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (dlistint_len(*h) == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	while (idx - 1 > 0)
	{
		current = current->next;
		idx--;
	}
	new_node  = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = current->next;
	new_node->prev = current;
	new_node->n = n;
	current->next = new_node;
	current->next->next->prev = new_node;
	return (new_node);
}
