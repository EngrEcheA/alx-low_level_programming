#include "main.h"

/**
 * _strspn - Entry point
 * @y: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *y, char *accept)
{
	unsigned int z = 0;
	int b;

	while (*y)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*y == accept[b])
			{
				z++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (z);
		}
		y++;
	}
	return (z);
}
