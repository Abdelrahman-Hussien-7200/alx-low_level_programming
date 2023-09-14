#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: pointer to head
 *
 * @index: index starting from 0
 *
 * Return: nth node or null
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *temp;

	n = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == n)
	return (temp);
	n++;
	temp = temp->next;
	}
	return (NULL);
}
