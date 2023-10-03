#include "main.h"

/**
 * _strchr - program entry point
 * @y: input value
 * @x: input value
 * Return: Always 0 (Success)
 */

char *_strchr(char *y, char x)
{
	int b = 0;

	for (; y[b] >= '\0'; b++)
	{
		if (y[b] == x)
			return (&y[b]);
	}
	return (0);
}
