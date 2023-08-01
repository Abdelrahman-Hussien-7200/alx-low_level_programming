/**
 * free_listint - frees a linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
