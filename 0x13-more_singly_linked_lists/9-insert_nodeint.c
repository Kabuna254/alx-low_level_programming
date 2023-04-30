#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node
  * @head: the pointer to a linked list
  * @idx: index of the list and starts at 0
  * @n: integer
  * Return: pointer to new node or NULL if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *current;
	unsigned int k;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = NULL;
	current = *head;
	for (k = 0; k < idx && current != NULL; k++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL && k < idx)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	prev->next = new;
	return (new);
}
