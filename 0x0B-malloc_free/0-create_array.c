#include "main.h"
#include <stdlib.h>

/**
 * Create_array - create array and assign char function
 * @size: size of array
 * @y: char to assign
 * Description: Create array, NULL if fail
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char y)

{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = y;
	return (str);
}
