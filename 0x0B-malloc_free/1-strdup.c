#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - This duplicates to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char xxx;
	int y, z = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	xxx = malloc(sizeof(char) * (y + 1));

	if (xxx == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		xxx[z] = str[z];

	return (xxx);
}
