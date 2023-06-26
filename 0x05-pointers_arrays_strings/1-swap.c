#include "main.h"

/**
 * swap_int - Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @a: int
 *
 * @b: int
 *
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
