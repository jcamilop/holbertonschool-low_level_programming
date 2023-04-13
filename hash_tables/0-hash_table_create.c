#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 *
 * @size: size of the hash table in bytes
 *
 * Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int i;
if (size < 1)
return (NULL);
/* Allocate the table */
hash_table = malloc(sizeof(hash_table_t));
if (!hash_table)
return (NULL);
/* Allocate pointers to the head nodes */
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (!hash_table->array)
{
free(hash_table);
return (NULL);
}
/* Initialize the table */
hash_table->size = size;
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;
return (hash_table);
}
