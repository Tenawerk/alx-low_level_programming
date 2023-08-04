#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: Character to be printed
 *
 * Return: On success 1. is returned
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
