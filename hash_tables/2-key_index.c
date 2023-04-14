#include "hash_tables.h"
/**
 * key_index - index of the key in the table
 *
 * @key: the key to look for in the table
 * @size: the size of the key in the table
 *
 * Return: the index of the key in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;
return (index);
}
