#include "function_pointers.h"

/**
 * print_name - function that prints name.
 * @name: the given name
 * @x: function of name
 *
 * Return: void
 */
void print_name(char *name, void (*x)(char *))
{
	if (name != NULL && x != NULL)

		x(name);
}
