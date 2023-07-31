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
	listint_t *current = *head;
	listint_t *next;

	while( current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
