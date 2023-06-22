#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Entry
 *
 * @size: int
 *
 * Description: h
 *
 * Return: 0
*/

void print_triangle(int size)
{
	int i, j, hash;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
		{
		_putchar(' ');
		}
		for (hash = 1; hash <= i; hash++)
		{
		_putchar(35);
		}
		_putchar('\n');
	}
	}
}
