#include <stddef.h>
#include "lists.h"

/**
 * listint_len - return num. of element in linked listint_t
 * @h: linstint_t
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
