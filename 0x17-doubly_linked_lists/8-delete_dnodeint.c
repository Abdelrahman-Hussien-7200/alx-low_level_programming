#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 *
 * @head: A pointer
 *
 * @index: The index of the node
 *
 * Return: 1 if successful, -1 if the node  not exist.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL;
			return (-1);

	dlistint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		for (unsigned int i = 0; i < index && current != NULL; i++)
			current = current->next;

		if (current == NULL)
			return (-1);

		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
