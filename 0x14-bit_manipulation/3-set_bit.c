#include "main.h"

/**
 * set_bit - sets bit at a given index to 1
 * @n: pointer to number to change
 * @index: bit index to set to 1
 *
 * Return: success = 1, failure = -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
