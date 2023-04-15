#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 *
 * @ht: hash table handle to print to stdout
 *
 * Return: 0 on success, -1 on failure
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;
int flag = 0;
if (!ht)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->next;
}
}
printf("}\n");
}
