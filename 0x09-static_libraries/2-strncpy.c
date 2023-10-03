#include "main.h"

/**
 * _strncpy - Program that copy a string
 * @dest: input value
 * @src: input value
 * @y: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int y)
{
	int a = 0;

	while (a < y && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < y)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
