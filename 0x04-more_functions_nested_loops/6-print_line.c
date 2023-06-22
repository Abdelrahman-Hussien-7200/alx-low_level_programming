#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry
 *
 * @n: int
 *
 * Description: h
 *
 * Return: 0
*/

void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
		_putchar(' ');
		}
		_putchar('\');
	}
	_putchar('\n');
	}
}
