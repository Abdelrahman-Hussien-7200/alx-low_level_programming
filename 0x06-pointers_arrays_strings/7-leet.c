#include "main.h"

/**
 * *leet - Entry
 *
 *@n:char
 *
 * Description: pointers
 *
 * Return:char
*/

char *leet(char *n)
{
	int i, j;

	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == st1[j])
			{
				n[i] = st2[j];
			}
		}
	}
	return (n);
}
