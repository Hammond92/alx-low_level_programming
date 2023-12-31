#include <stddef.h>
#include "lists.h"

/**
 * *add_nodeint_end - new node at the end of a listint_t list
 * @head: first element
 * @n: new element
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if(!new)
		return(NULL);
	new->n = n; new->next = NULL;

	if(*head == NULL)
	{
		*head =new;
		return (new);
	}

	while(temp->next)
	{
		temp = temp->next; temp->next = new;
	}
	
	return(new);
}
