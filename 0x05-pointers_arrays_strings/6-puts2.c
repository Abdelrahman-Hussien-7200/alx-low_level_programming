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
	int i = 0;

	for (; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
