#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another
 * @f1: string to append
 * @f2: string to concatenate from
 * @n: number of bytes from f2 to concatenate to f1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *f1, char *f2, unsigned int n)
{
	char *f;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (f1 && f1[len1])
		len1++;
	while (f2 && f2[len2])
		len2++;

	if (n < len2)
		f = malloc(sizeof(char) * (len1 + n + 1));
	else
		f = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!f)
		return (NULL);

	while (a < len1)
	{
		f[a] = f1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		f[a++] = f2[b++];

	f[a] = '\0';

	return (f);
}
