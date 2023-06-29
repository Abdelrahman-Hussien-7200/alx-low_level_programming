#include "main.h"

/**
 * _strcat - Entry
 *
 * @dest: char pointer
 *
 * @src: char pointer
 *
 * @n: int
 *
 * Description: pointers
 *
 * Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
