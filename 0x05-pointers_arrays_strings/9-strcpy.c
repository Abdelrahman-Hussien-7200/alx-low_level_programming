#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcpy- Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @dest: char
 *
 * @src: char
 *
 * Return: 0
*/

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
	dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
