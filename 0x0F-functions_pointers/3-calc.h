#ifndef _CALC_
#define _CALC_
/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: the function associated 
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_up_func(char *s))(int, int);
#endif
