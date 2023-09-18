#include "main.h"

/**
 * _isalpha - Entry
 *
 * @c: the char to be checked
 *
 * Description: Loops
 *
 * Return: 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 96 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
