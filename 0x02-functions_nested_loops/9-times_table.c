#include "main.h"

/**
 * times_table - Entry
 *
 * Description: Loops
 *
 * Return:viod
*/

void times_table(void)
{
	int i, j, k, l, o;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	k = i * j;
	if (k > 9)
	{
	l = k % 10;
	o = (k - l) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(o + 48);
	_putchar(l + 48);
	}
	else
	{
	if (j != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(k + 48);
	}
	}
	_putchar('\n');
	}
}
