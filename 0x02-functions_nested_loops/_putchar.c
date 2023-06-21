#include "main.h"
#include <unistd.h>
/**
 * _putcher - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcher(char c)
{
	return (write(1, &c, 1));
}
