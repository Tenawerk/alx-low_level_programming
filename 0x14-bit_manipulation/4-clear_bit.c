#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: pointer to changing number
 * @index: bit to clear index
 *
 * Return: success = 1, failure = -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
