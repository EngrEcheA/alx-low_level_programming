#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input, add up for size
 * @f1: input one to the concat
 * @f2: input two to the concat
 * Return: concat of f1 and f2
 */

char *str_concat(char *f1, char *f2)
{
	char *conct;
	int x, yz;

	if (f1 == NULL)
		f1 = "";
	if (f2 == NULL)
		f2 = "";

	x = yz = 0;
	while (f1[x] != '\0')
		x++;
	while (f2[yz] != '\0')
		yz++;
	conct = malloc(sizeof(char) * (x + yz + 1));

	if (conct == NULL)
		return (NULL);
	x = yz = 0;
	while (f1[x] != '\0')
	{
		conct[x] = f1[x];
		x++;
	}

	while (f2[yz] != '\0')
	{
		conct[x] = f2[yz];
		x++, yz++;
	}
	conct[x] = '\0';
	return (conct);
}
