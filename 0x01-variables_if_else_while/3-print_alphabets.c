#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Putchar
 *
 * Return: 0 success
 */

int main(void)
{
	char x;
	char X;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (X = 'A'; X <= 'Z'; X++)
	{
		putchar(X);
	}
	putchar('\n');

	return (0);
}
