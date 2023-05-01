#include <stdio.h>
#include "lists.h"

/**
  * reverse_listint - function that reverses a linked list
  * @head: pointer to the address of the head of linked list
  * Return: pointer to the first node of reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;
	return (*head);
}
