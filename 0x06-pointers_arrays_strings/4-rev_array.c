#include "main.h"

/**
 * reverse_array - Entry
 *
 * @a: int pointer
 *
 * @n: int
 *
 * Description: pointers
 *
 * Return:void
*/

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}
