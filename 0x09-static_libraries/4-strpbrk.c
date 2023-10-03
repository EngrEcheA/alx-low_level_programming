#include "main.h"

/**
 * _strpbrk - Entry point
 * @y: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *y, char *accept)
{
	int a;

	while (*y)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*y == accept[a])
				return (y);
		}
		y++;
	}
	return ('\0');
}
