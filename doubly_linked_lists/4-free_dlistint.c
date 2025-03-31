#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dlistint - free the doubly linked list given
 *
 * @head: the head of the doubly linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
