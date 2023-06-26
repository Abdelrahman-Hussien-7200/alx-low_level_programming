#include <string.h>
#include "main.h"

/**
 * rev_string- Entery
 *
 * Description: Don't swap horses in crossing a stream
 *
 * @s: char
 *
 * Return: 0
*/

void rev_string(char *s)
{
	int len = 0, ind = 0;
	char x;

	while (s[ind++])
	{
		len++;
	}
	for (ind = len - 1; ind >= len / 2; ind--)
	{
		x = s[ind];
		s[ind] = s[len - ind - 1];
		s[len - ind - 1] = x;
	}
}
