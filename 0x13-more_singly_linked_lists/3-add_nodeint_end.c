#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 *
 * @head: pointer to a pointer
 *
 * @n: integer to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	if (n == 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (new_node->n == 0)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
