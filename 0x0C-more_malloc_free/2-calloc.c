#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Entry
 *
 * @nmemb: int
 *
 * @size: int
 *
 * Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int v, j = 0;
	char *i;

	i = malloc(size * sizeof(nmemb));

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (i == NULL)
		return (NULL);

	while (i[j])
		j++;

	for (v = 0; v < j; v++)
	{
		i[v] = 0;
	}
	return (i);
}
