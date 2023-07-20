#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry
 *
 * @separator: char
 *
 * @n: integer
 *
 * Description: function
 *
 * Return: 0 success
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n > 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

		}
		va_end(list);
	}
	printf("\n");
}
