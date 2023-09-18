#include "main.h"

/**
 * _strstr - Entery point
 *
 * @haystack: char
 *
 * @needle: char
 *
 * Discription: pointers
 *
 * Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
