#include <stdio.h>
#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node
  * @head: pointer to the head of listint_t list
  * @index: index of the node to locate starting at 0
  * Return: NULL if node does not exist
  *		Otherwise the located node.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int a;

	for (a = 0; node != NULL && a < index; a++)
	{
		node = node->next;
	}
	if (a == index)
	{
		return (node);
	}
	return (NULL);
}
