#include <stdio.h>
#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Function that counts the no. of unique nodes
 *                      in looped listint_t linked list
 * @head: pointer to the head of the listint_t to check
 * Return: 0 if the list is not looped
 *         otherwise the number of unique nodes in the list
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *cat, *fox;
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
 * free_listint_safe - function that frees a listint_t list safely
 * @h: pointer to the address of the head of the listint_t list
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
