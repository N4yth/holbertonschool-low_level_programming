#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_dlistint - sum all the Uint of the doubly linked list
 *
 * @head: the head of the doubly linked list
 *
 * Return: the sum of all Uint of the doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	do {
		head = head->next;
		count += head->n;
	} while (head->next);

	return (count);
}
