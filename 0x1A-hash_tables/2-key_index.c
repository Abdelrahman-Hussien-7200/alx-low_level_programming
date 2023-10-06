include "hash_tables.h"
/**
 * key_index - find index of a key
 * @key: pointer to key
 * @size: size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashy;

	hashy = hash_djb2(key) % size;
	return (hashy);
}
