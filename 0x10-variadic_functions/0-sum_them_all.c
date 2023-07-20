#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry
 *
 * @n: integer
 *
 * Description: function
 *
 * Return: integer
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);

}
