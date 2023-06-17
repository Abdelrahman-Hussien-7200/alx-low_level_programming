#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Nasted loop
 *
 * Return: 0 success
*/

int main(void)
{
	int x1;
	int x2;
	for (x1 = 48; x1 <= 57; x1++)
	{
		x2 = 48;
		for (; x2 <= 57; x2++)
		{
			if (x1 != x2 && x1 < x2)
			{
				putchar(x1);
				putchar(x2);
				if (x1 + x2 != 56 + 57)
				{
					putchar (59);
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
