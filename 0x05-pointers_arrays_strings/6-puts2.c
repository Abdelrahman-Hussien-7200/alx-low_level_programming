#include <string.h>
#include "main.h"

/**
 * puts2- Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @str: char
 *
 * Return: 0
*/

void puts2(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
