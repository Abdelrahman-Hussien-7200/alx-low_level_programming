#include "lists.h"

/**
  * free_listint2 - single linked list.
  *
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*current)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
