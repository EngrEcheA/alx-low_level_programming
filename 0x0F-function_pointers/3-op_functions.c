#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - ***
 * @x: ***
 * @y: ***
 *
 * Return: ***
 */
int op_add(in x, int y)
{
	return (x + y);
}

/**
 * op_sub - ***
 * @x: ***
 * @y: ***
 *
 * Return: ***
 */
int op_sub(int x, int y)
{
	return (x - y);
}

/**
 * op_mul - ***
 * @x: ***
 * @y: ***
 *
 * Return: ***
 */
int op_mul(int x, int y)
{
	return (x + y);
}

/***
 * op_div - ***
 * @x: ***
 * @y: ***
 *
 * Return: ***
 */
int op_div(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x / y);
}

/**
 * op_mod - ***
 * @x: ***
 * @y: ***
 *
 * Return: ****
 */
int op_mod(int x, int y)
{
	if (y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (x % y);
}
