#include "main.h"

/**
 * get_endianness - checks for little machine or big endian
 * Return: big = 0, little = 1
 *
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
