#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: Sucess = 1.
 * Error = -1, and errno is set appropriately 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
