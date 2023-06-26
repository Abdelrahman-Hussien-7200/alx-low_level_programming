#include <string.h>
#include "main.h"

/**
 * _strlen - Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @s: char
 *
 * Return: 0
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++);
	length++;
	return (length);
}
