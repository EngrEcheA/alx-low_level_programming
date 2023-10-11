#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - ****
 * @x: ***
 *
 * Return: ***
 */
int (*get_op_func(char *x))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int y;

	while (y < 5)
	{
		if (strcmp(x, ops[y].op) == 0)
			return (ops[y].f);

		y++;
	}
	return (0);
}
