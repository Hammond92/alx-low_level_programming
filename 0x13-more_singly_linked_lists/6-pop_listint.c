#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: firts element pointer
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;
	int num = (*head)->n;
	if (!head || !*head)
		return (0);
	free(*head); *head = temp;

	return (num);
}
