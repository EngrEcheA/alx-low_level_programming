#include "main.h"

/**
 * _atoi -convert a string into an integer
 * @x: string to be used in the program
 *
 * Return: integer
 */

int _atoi(char *x)
{
	int sig = 1, j = 0;
	unsigned int unsig = 0;

	while (!(x[j] <= '9' && x[j] >= '0') && x[j] != '\0')
	{
		if (x[j] == '-')
			sig *= -1;
		j++;
	}
	while (x[j] <= '9' && (x[j] >= '0' && x[j] != '\0'))
	{
		unsig = (unsig * 10) + (x[j] - '0');
		j++;
	}
	unsig *= sig;
	return (unsig);
}
