#include <stdio.h>

/**
 * main - Entry
 *
 * Descrpition: Hexa
 *
 * Return: 0 success
*/

int main(void)
{
	int x;
	char z;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
