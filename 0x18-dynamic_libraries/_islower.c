#include "main.h"

/**
 * _islower - Entry
 *
 * @c: the char to be checked
 *
 * Description: Loops
 *
 * Return: 1 or 0
*/

int _islower(int c)
{
	if (c >= 96 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
