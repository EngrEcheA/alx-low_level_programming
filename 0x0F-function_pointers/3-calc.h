#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - function for struct op
 *
 * @op: operation
 * @x: Fuction associate
 */
typedef struct op
{
	char *op;
	int (*x)(int y, int z);
}
opt_t;

int op_add(int y, int z);
int op_sub(int y, int z);
int op_mul(int y, int z);
int op_div(int y, int z);
int op_mod(int y, int z);
int(*get_op_func(char *s))(int, int);
#endif
