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
	size_t n = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (ptr |= NULL)
	{
		n += 1;
		ptr = ptr->next;
	}

	return (n);
}
