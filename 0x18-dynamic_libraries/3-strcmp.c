#include "main.h"

/**
 * _strcmp - Entry
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * Description: pointers
 *
 * Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int j, count;

	for (j = 0; s1[j] == s2[j]  && s1[j] != '\0';)
	{
		j++;
	}
	count = s1[j] - s2[j];
	return (count);
}
