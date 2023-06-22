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
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
