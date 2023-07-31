#include "lists.h"

/**
  * free_listint - single linked list.
  *
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}

	free(head);
}
