#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
	dlistint_t *tmp_prev;
	dlistint_t *tmp_next;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (*h == NULL)
	{
		return (0);
	}
	while (idx - 1 != i) /* go to the previous node */
	{
		i++;
		if ((*h)->next == NULL)
		{
			return (NULL);
		}
		*h = (*h)->next;
	}

	/* save the next and previous node*/
	tmp_prev = *h;
	tmp_next = (*h)->next;

	/* set the next node to the wanted new and swith to it */
	(*h)->next = new_node;
	*h = (*h)->next;

	/* set all the value of the new node with the saved one */
	(*h)->n = n;
	(*h)->prev = tmp_prev;
	(*h)->next = tmp_next;

	/* set the h to the head of the doubly linked list */
	for (i++ ; i ; i--)
	{
		*h = (*h)->prev;
	}
	return (new_node);
}
