#include <string.h>
#include "main.h"

i/**
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
	int i = 0, j = 0;
	char x;

	while (s[j++])
	{
		i++;
	}
	for (j -= 1; j >= i / 2; j--)
	{
		x = s[j];
		s[j] = s[i - j -1];
		s[i - j - 1] = x;
	}
}
