#include "main.h"

/**
 * _strchr - Entery point
 *
 * @s: string
 *
 * @c: char
 *
 * Discription: pointers
 *
 * Return: char
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
