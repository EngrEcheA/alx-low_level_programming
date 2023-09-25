#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s which
 * consist only of bytes from accepts.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
