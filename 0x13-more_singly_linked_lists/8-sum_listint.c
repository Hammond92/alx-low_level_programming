#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all 
 * the data (n) of a listint_t linked list.
 * @head: first node
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)

{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
