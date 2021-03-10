#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition on operands
 * @a: first operand
 * @b: second operand
 * Return: result int
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtraction on operands
 * @a: first operand
 * @b: second operand
 * Return: result int
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplication on operands
 * @a: first operand
 * @b: second operand
 * Return: result int
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division on operands
 * @a: first operand
 * @b: second operand
 * Return: result int
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - modulus on operands
 * @a: first operand
 * @b: second operand
 * Return: result int
 */
int op_mod(int a, int b)
{
return (a % b);
}
