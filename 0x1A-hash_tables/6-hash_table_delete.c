#include "hash_tables.h"
/**
 * hash_table_delete - delete a table
 * @ht: table to be deleted
 * Return: always successful
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *tem;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			tem = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = tem;
		}
	}
	free(ht->array);
	free(ht);
}
