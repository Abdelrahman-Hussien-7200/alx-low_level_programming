#include "main.h"

/**
 * _strpbrk - Entery point
 *
 * @s: string
 *
 * @accept: char
 *
 * Discription: pointers
 *
 * Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			break;
			return (s[i]);
		}
		}
	}
	return (NULL);
}
