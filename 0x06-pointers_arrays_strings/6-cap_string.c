#include "main.h"

/**
 * *cap_string - Entry
 *
 *@n:char
 *
 * Description: pointers
 *
 * Return:char
*/

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[0] >= 'a' && n[0] <= 'z')
		{
			n[0] = n[0] - 32;
		}
		if (n[i] == ' ' || n[i] == ','
		|| n[i] == ';' || n[i] == '.'
		|| n[i] == '!' || n[i] == '?'
		|| n[i] == '"' || n[i] == '('
		|| n[i] == ')' || n[i] == '{'
		|| n[i] == '}' || n[i] == '\n'
		|| n[i] == '\t')
		{
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
	}
	return (n);
}
