#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - set the specified hash table value
 *
 * @ht: the hash table handle
 * @key: the hash key value to set the specified hash table value
 * @value: the hash value to set the specified hash table value
 *
 * Return: 0 if successful and -1 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *new_node;
/* Check for invalid input */
if (ht == NULL || key == NULL || strcmp(key, "") == 0)
{
return (0);
}
/* Get the index for the key */
index = key_index((const unsigned char *) key, ht->size);
/* Check if the key already exists */
node = ht->array[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}
/* Create a new node and add it to the beginning of the list */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
