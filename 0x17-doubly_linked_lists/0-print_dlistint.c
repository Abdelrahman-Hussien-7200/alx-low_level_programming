#include "lists.h"

/*
 * print_dlistint - Entery point
 *
 * @h: pointer struct
 *
 * Description: a function that prints all the
 *  elements of a dlistint_t list
 *
 *  Return: size_t
**/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n += 1;
	}

	return (n);
}
