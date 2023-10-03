#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @y: Character to be checked
 * Return: 1 if y is a letter, 0 if not
 */

int _isalpha(int y)
{
	return ((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z'));
}
