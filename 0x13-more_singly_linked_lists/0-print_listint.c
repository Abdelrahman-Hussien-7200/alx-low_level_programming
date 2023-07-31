#include "lists.h"

/**
 * print_list - Entry point
 * @h: pointer to the head of the list
 * Description: single linked
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
