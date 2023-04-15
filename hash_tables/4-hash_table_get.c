#include "hash_tables.h"
/**
 * hash_table_get - get a hash table from a hash table
 *
 * @ht: the hash table handle
 * @key: the hash key to look up in the hash table
 *
 * Return: a hash table handle
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;
if (!ht || !key)
return (NULL);
index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
