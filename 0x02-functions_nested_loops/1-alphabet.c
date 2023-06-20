#include "main.h"

/**
 * main -Entery point
 *
 * Description: loops
 *
 * Return: 0
*/

void print_alphabet(void);

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}

	return (0);
}
