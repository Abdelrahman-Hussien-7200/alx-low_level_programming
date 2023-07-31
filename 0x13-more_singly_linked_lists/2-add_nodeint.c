#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

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

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
