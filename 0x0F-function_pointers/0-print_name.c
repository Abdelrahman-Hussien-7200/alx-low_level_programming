#include "function_pointers.h"

/**
  * print_name -Entry point
  *
  * @name: char
  *
  * @f: Pointer to function
  *
  * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
