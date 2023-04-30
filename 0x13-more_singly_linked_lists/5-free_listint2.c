#include <stdio.h>
#include "lists.h"

/**
  * free_listint2 - function that frees a listint_t list
  * @head: pointer to the address of the head of listint_t list
  * Description: the function sets the head to NULL
  * Return: empty
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
