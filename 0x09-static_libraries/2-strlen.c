#include "main.h"

/**
 * _strlen - program that returns the length of a string
 * @y: string
 * Return: length
 */

int _strlen(char *y)
{
	int longa = 0;

	while (*y != '\0')
	{
		longa++;
		y++;
	}
	return (longa);
}
