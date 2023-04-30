#include <stdio.h>
#include "lists.h"

/**
  * sum_listint - returns sum of all data (n)
  * @head: pointer to the head of listint_t list
  * Return: 0 if list is empty
  *		Otherwise the sum of all data
  */

int sum_listint(listint_t *head)
{
	listint_t *data = head;
	int sum = 0;

	while (data != NULL)
	{
		sum += data->n;
		data = data->next;
	}
	return (sum);
}
