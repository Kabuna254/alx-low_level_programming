#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts or
 *		NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat = head;
	listint_t *fox = head;

	if (!head)
	{
		return (NULL);
	}
	while (fox && cat && cat->next)
	{
		cat = cat->next->next;
		fox = fox->next;
		if (cat == fox)
		{
			fox = head;
			while (fox != cat)
			{
				fox = fox->next;
				cat = cat->next;
			}
			return (cat);
		}
	}
	return (NULL);
}
