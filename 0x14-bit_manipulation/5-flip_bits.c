#include "main.h"

/**
 * flip_bits - Entery point
 *
 * Description: a function that returns the number of bits you would need to flip to get from one number to another.
 *
 * @n: unsigned long int
 *
 * @m: unsigned long int
 *
 * Return: the number of bits you would need to flip to get from one number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, x = 0;
	unsigned long int cur1;
	unsigned long int ex1 = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur1 = ex1 >> i;
		if (cur1 & 1)
			x++;
	}

	return (x);
}
