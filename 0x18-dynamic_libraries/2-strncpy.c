#include "main.h"

/**
 * _strncpy - Entry
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

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
