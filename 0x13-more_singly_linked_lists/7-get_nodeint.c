#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node 
 * of a listint_t linked list.
 * @head: first node
 * @index: index to return
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	listint_t *temp = head; unsigned int i = 0;
		while (temp && i < index)
		{
			temp = temp->next; i++;
		}
	return (temp ? temp : NULL);
}
