#include <stdio.h>
#include "lists.h"

/**
  * listint_len - function that returns no. of elements
  *			in a linked listint_t list
  * @h: a pointer to the head of listint_t list
  * Return: no. of elements in listint_t list
  */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
