#include <stdio.h>

/**
 * main - Entery
 *
 * Description: Reverse digits
 *
 * Return: 0 success
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
