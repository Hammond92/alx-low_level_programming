#include <stddef.h>
#include "lists.h"

/**
 * print_listint -  printing of all the elements of a listint_t
 * @h: the pointer to the listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h=h->next;
	}
	
	return (num);
}
