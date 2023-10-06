#include "hash_tables.h"
/**
 * hash_djb2 - djb2 algorithm
 * @str: const unsigned char
 * Return: always 1
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int n;

	while ((n = *str++))
		hash = ((hash << 5) + hash) + n; /*hash * 33 + n*/
	return (hash);
}
