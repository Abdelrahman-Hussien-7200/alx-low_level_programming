#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry
 *
 * Description: h
 *
 * Return: void
*/

void more_numbers(void)
{
	int i, j, count;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		count = i;

		if (i > 9)
		{
			_putchar(1 + 48);
			count = i % 10;
		}
		_putchar(count + 48);
	}
	_putchar('\n');
	}
}
