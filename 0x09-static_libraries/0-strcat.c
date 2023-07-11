#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: entered value
 * @src: entered value 
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\n')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\n')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
