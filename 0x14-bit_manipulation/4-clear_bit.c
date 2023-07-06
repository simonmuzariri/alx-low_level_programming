#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: Apointer to the bit
 * @index: the index to set the value at
 * ideces start at 0.
 * Return: if an error occurs - -1.
 * Otherwise  - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
