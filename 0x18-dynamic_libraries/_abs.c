#include "main.h"

/**
 * _abs - Entry
 *
 * @n : int
 *
 * Description: Loops
 *
 * Return: + number
*/

int _abs(int n)
{
	if (n < 0)
	{
		int absv;

		absv = n * -1;
		return (absv);
	}
	return (n);
}
