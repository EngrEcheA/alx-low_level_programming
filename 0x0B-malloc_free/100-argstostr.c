#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @dx: int input
 * @dy: doubble pointer array
 * Return: 0
 */

char *argstostr(int dx, char **dy)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (dx == 0 || dy == NULL)
		return (NULL);

	for (i = 0; i < dx; i++)
	{
		for (n = 0; dy[i][n]; n++)
			l++;
	}
	l += dx;

	str = malloc(sizeof(char) * 1 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < dx; i++)
	{
		for (n = 0; dy[i][n]; n++)
		{
			str[r] = dy[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
