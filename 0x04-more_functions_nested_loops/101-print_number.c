#include <stdio.h>
#include "main.h"

/**
 * print_number - Entry
 *
 * @n: int
 *
 * Description: h
 *
 * Return: 0
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(1 / 10);
	}
	_putchar(i % 10 + '0');
}
