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
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = *(temp->n);
	*head = temp->next;

	free(temp->n);
	free(temp);

	return (data);
}
