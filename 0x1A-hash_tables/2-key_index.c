#include "hash_tables.h"

/**
 * key_index - A funct that gets index for key given
 * @key: The key (string) to hash
 * @size: The size of hash table
 * Return: The index of 'key' using djb2
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
