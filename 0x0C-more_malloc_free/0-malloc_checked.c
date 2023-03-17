#include "main.h"
/**
 * malloc_checked - Allocate memory using 'malloc'.
 * Description: if malloc fails , the function should cause normal
 * process termination with a status value of '98'.
 * @b: the size of the memory that we want to allocate (type unsigned int).
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *allocatedMemory;

	allocatedMemory = malloc(b);
	if (allocatedMemory == NULL)
		exit(98);

	return (allocatedMemory);
}
