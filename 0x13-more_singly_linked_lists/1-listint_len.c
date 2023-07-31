#include "lists.h"

/**
  * listint_len - entery point
  *
  * @h: A single linked list
  *
  * Return: The number of elements of a list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
