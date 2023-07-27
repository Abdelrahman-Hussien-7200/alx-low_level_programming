#include "lists.h"

/**
  * add_node - Adds a new node
  *
  * @head: single linked list
  *
  * @str: The string
  *
  * Return: The address of the new list or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
  * _strlen - Returns the length
  *
  * @s: String
  *
  * Return: String length
*/

int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
