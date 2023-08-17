#ifndef CAL_H
define CALC_C

int (*get_op_function(char *s))(int, int);
int op_add(int a, int b);
int op_sub( int a, int b);
int op_mul(int am int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function asscoiated
  */
typedef struct op
{
	char *op;
	int (*f)(int a, int b)
} op_t;

#endif
