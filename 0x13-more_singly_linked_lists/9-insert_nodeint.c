#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: where idx is the index of the list where the new
 * node should be added. Index starts at 0
 * @idx: where idx is the index of the list where the new
 * node should be added. Index starts at 0
 * @n: new node insertion
 * Return: the address of the new node, or NULL if it failed
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i;
	if (!new || !head)
		return (NULL);
	
	new->n = n; new->next = NULL;

	if (idx == 0)
	{
		new-> = *head; *head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx -1)
		{
			new->next = temp->next; temp->next = new;
			return (new);
		}
		else
			temp = tem->next;
	}
	return (NULL);
}

