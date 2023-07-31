#include "lists.h"

/**
 * pop_listint - Entery point
 *
 * @head: struct link
 *
 * Description: abdo made it
 *
 * Return: integer
*/

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (n);

}
