#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - free the linked list given
 *
 * @head: the head of the linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temporary = head;
	list_t *next;

	while (temporary != NULL)
	{
		next = temporary->next;
		free(temporary->str);
		free(temporary);
		temporary = next;
	}
}
