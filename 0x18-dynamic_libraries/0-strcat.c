#include "main.h"

/**
 * _strcat - Entry
 *
 * @dest: char pointer
 *
 * @src: char pointer
 *
 * Description: pointers
 *
 * Return: char
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
