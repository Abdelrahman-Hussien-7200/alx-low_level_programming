#include <string.h>
#include "main.h"

/**
 * _puts- Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @str: char
 *
 * Return: 0
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchsr('\n');
}
