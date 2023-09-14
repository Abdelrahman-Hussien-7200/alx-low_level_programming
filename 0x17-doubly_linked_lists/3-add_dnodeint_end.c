#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 *
 * @head: head of the list
 *
 * @n: value
 *
 * Return: the address or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	dlistint_t *ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	temp->prev = ptr;

	return (head);
}
