#include "main.h"

/**
 * _memset - This fills a block memo with a specific value
 * @x: begins address of memory to be filled
 * @y: Desired value
 * @z: number of bytes to be changed.
 *
 * Return: modify array with new value for z bytes
 */

char *_memset(char *x, char y, unsigned int z)

{
	int a = 0;

	for (; z > 0; a++)
	{
		x[a] = y;
		x--;
	}
	return (x);
}
