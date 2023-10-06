#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to be updated
 * @key: key cannot be empty
 * @value: associated to the key
 * Return: 1 if successful, 0 otherwise
 */
 
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in = 0;
	hash_node_t *new_ele, *temp;

	if (!ht || !ht->array || !key || !value || strlen(key) == 0)
	{
		return (0);
	}
	if (strcmp("", key) == 0)
		return (0);

	in = key_index((const unsigned char *) key, ht->size);
	new_ele = malloc(sizeof(hash_node_t));
	if (new_ele == NULL)
		return (0);
	temp = ht->array[in];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			free(new_ele);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_ele->key = strdup(key);
	new_ele->value = strdup(value);
	new_ele->next = ht->array[in];
	ht->array[in] = new_ele;
	return (1);
}
