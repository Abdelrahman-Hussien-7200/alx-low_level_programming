/**
 * free_listint_safe - frees a linked list safely
 *
 * @h: double pointer to the head of the linked list
 *
 * Return: the size of the list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast < slow)
	{
		slow = slow->next;
		fast = fast->next;
		if (fast != NULL)
			fast = fast->next;
	}

	while (*h != NULL)
	{
		listint_t *tmp = *h;

		*h = (*h)->next;
		free(tmp);
		count++;

		if (*h == slow)
		{
			*h = NULL;
			count++;
			break;
		}
	}

	return (count);
}
