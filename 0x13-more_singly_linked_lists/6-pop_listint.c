#include <stdio.h>
#include "lists.h"

/**
  * pop_listint - function that deletes the head node
  *			of a listint_t list
  * @head: pointer to address of the head of listint_t list
  * Return: 0 if the linked list is empty
  *		otherwise the head node's data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_node;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	head_node = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (head_node);
}
