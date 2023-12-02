#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: this is the key of the function
 * @size: size of the array to check
 * Return: return the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
