#include <stddef.h>
#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list
 * @head: pointer to listint_t
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

		head == NULL
		
	while(*head)
	{
		temp = (*head)->next; 
		free(*head); 
		*head = temp;
	}
	*head = NULL;
}

