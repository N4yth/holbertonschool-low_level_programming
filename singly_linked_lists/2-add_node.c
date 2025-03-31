#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - the function create a new head on a linked list
 *
 * @head: the head of the linked list
 * @str: the string of the new head
 *
 * Return: the new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0, count = 0;
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	new_head->str = strdup(str);
	new_head->len = count;
	new_head->next = *head;

	*head = new_head;
	return (new_head);
}
