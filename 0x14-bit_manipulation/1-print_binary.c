#include "main.h"

/**
 * print_binary - Entry point
 *
 * n: unsigned long int
 *
 * Description: a function that prints the binary representation of a number
 *
 * @Return: void
*/

void print_binary(unsigned long int n)
{
	int i = 63, x = 0;
	unsigned long int travc;

	for (; i >= 0; i--)
	{
		travc = n >> i;

		if (travc & 1)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
