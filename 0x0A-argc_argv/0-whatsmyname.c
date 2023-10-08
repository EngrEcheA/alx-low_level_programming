#include <stdio.h>
#include "main.h"

/**
 * main - Name printing program
 * @argc: number of arguments
 * #argv: array of arguments.
 *
 * Return: Always 0 (succedss)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
