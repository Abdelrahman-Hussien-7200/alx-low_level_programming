#include <stdlib.h>
#include "main.h"

/**
 * array_range - Entry
 *
 * @min: int
 *
 * @max: int
 *
 * Return: int
*/

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}

	return (p);
}
