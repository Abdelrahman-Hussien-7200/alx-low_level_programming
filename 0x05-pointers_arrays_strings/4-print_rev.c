#include <string.h>
#include "main.h"

/**
 * print_rev- Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @s: char
 *
 * Return: 0
*/

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
