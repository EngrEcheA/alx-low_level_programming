#include "main.h"

/**
 * _strncat - Concatenate two strings
 * using at most z bytes from src
 * @dest: entered value
 * @src: entered value
 * @z: entered value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int z)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < z && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
