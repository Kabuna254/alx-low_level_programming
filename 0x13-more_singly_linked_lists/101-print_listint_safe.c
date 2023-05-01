#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
  * looped_listint_len -function that counts no. of unique nodes
  *			in looped listint_t linked list
  * @head: pointer to the head of listint_t to check
  * Return: 0 if the list is not looped
  *		Otherwise returns the no. of unique nodes in the lis
  */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cat, *fox;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	cat = head->next;
	fox = (head->next)->next;
	while (fox)
	{
		if (cat == fox)
		{
			cat = head;
			while (cat != fox)
			{
				nodes++;
				cat = cat->next;
				fox = fox->next;
			}
			cat = cat->next;
			while (cat != fox)
			{
				nodes++;
				cat = cat->next;
			}
			return (nodes);
		}
		cat = cat->next;
		fox = (fox->next)->next;
	}
	return (0);
}

/**
  * print_listint_safe - function that prints listint_t list safely
  * @head: pointer to the head of listint_t list
  * Return: number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		size_t b = 0;

		while (b < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			b++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
