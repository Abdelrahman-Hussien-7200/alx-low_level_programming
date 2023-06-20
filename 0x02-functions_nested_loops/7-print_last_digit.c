#include "main.h"

/**
 * print_last_digit - Entry
 *
 * @n : int
 *
 * Description: Loops
 *
 * Return: int
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + 48);
	return (l);
}
