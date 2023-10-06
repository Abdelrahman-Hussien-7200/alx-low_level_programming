#include "hash_tables.h"
/**
 * hash_table_print - print a hash table in C
 * @ht: hash table
 * Return: printed elements
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int in = 0;
	unsigned int checker = 0;
	hash_node_t *tem;

	if (!ht)
		return;
	printf("{");
	while (in < ht->size)
	{
		tem = ht->array[in];
		while (tem != NULL)
		{
			if (checker == 1)
				printf(", ");
			printf("'%s': '%s'", tem->key, tem->value);
			checker = 1;
			tem = tem->next;
		}
		in++;
	}
	printf("}\n");
}
