#include "lists.h"

/**
 * dlistint_len - Entery point
 *
 * @h: struct link
 *
 * Description: abdo made it
 *
 * Return: size_t
*/

size_t dlistint_len(const dlistint_t *h)
{
	int n;

	n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
