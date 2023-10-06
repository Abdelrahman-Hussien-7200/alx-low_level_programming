#include "hash_tables.h"
/**
 * hash_table_create - C function to create a hash table
 * @size: size of hash table, unsigned long int type
 * Return: returns a pointer created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *h_table = NULL;

	/* allocate memory for hash table*/
	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	/*allocate memory for node in hash table*/
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		h_table->array[count] = NULL;
	}
	return (h_table);
}
