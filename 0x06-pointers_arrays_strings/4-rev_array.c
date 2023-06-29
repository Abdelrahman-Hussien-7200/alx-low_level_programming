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
	int i = n - 1, j = 0, b[n];

	for (; i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
}
