#include "main.h"

/**
 * get_bit - Entry point
 *
 * Description: a function that returns the value of a bit at a given index
 *
 * @n: unsigned long int
 *
 * @index: unsigned int
 *
 * Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
