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
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);

}
