#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - the function create a new tail on a linked list
 *
 * @head: the head of the linked list
 * @str: the string of the new tail
 *
 * Return: the new linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0, count = 0;
	list_t *new_tail = malloc(sizeof(list_t));
	list_t *temporary = *head;

	if (new_tail == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	new_tail->str = strdup(str);
	new_tail->len = count;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		*head = new_tail;
		return (new_tail);
	}
	while (temporary->next != NULL)
	{
		temporary = temporary->next;
	}
	temporary->next = new_tail;
	return (*head);
}
