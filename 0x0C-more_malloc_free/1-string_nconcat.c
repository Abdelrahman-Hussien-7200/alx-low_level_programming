#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Entry
 *
 * @s1: char
 *
 * @s2: char
 *
 * @n: int
 *
 * Return: void
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, m = 0, v = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		m = i + k;
	else
		m = i + n;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);

	for (v = 0; j < m; j++)
	{
		if (j <= i)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[v];
			v++;
		}
	}
	str[j] = '\0';
	return (str);
}
