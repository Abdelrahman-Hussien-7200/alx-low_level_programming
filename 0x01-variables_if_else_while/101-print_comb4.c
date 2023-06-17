#include <stdio.h>

/**
 * main - Entry
 *
 * Description : Nested loops
 * Return: 0 success
*/

int main(void)
{
	int x1;
	int x2;
	int x3;

	for (x1 = 48; x1 <= 57; x1++)
	{
		x2 = 48;
		for (; x2 <= 57; x2++)
		{
			x3 = 48;
			for (; x3 <= 57; x3++)
			{
				if (x1 != x2  && x1 < x2)
				{
					if (x2 != x3 && x2 < x3)
						{
							putchar(x1);
							putchar(x2);
							putchar(x3);
							if (x1 + x2 + x3 != 55 + 56 + 57)
							{
								putchar (44);
								putchar (' ');
							}
						}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
