#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 *
 * @head: first node in the link
 *
 * @index: index of the node to return
 *
 * Return: pointer to the node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (current != NULL)
		return (current);
	else
		return (NULL);
}
