#include "main.h"

/**
 * _strcmp - This compare string values
 * @f1: input value
 * @f2: input value
 *
 * Return: f1[i] - f2[i]
 */

int _strcmp(char *f1, char *f2)
{
	int y = 0;

	while (f1[y] != '\0' && f2[y] != '\0')
	{
		if (f1[y] != f2[y])
		{
			return (f1[y] - f2[y]);
		}
		y++;
	}
	return (0);
}
