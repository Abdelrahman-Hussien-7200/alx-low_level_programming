#include "main.h"

/**
 * jack_bauer - Entry
 *
 * Description: Loops
 *
 * Return:viod
*/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
	{
	for (k = 0; k <= 5; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	_putchar(i + 48);
	_putchar(j + 48);
	_putchar(58);
	_putchar(k + 48);
	_putchar(l + 48);
	_putchar('\n');
	}
	}
	}
	}
	}
}
