#include "main.h"

/**
 * _isupper - confirm if uppercase letters
 * @y: char to confirm
 *
 * Return: if uppercase return 1, otherwise return 0
 */

int _isupper(int y)

{
	if (y >= 'A' && y <= 'Z')
		return (1);

	return (0);
}
