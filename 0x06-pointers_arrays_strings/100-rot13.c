#include "main.h"

/**
 * *rot13 - Entry
 *
 *@n:char
 *
 * Description: pointers
 *
 * Return:char
*/

char *rot13(char *n)
{
	int i, j;

	char st1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char st2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == st1[j])
			{
				n[i] = st2[j];
				break;
			}
		}
	}
	return (n);
}
