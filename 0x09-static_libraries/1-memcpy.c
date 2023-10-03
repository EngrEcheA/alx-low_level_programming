#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: memory where it is stored
 * @src: memory where it is copied
 * @x: number of bytes
 *
 * Return: copied memory with x bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int x)
{
	int b = 0;
	int z = x;

	for (; b < z; b++)
	{
		dest[b] = src[b];
		x--;
	}
	return (dest);
}
