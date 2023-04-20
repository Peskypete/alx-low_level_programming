#include "function_pointers.h"
int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);
/**
 * op_add - adds to ints
 * @num1: the first number
 * @num2: the second number
 * Return: result
 */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}
/**
 * op_sub - subtracts two ints
 * @num1: the first number
 * @num2: the second number
 * Return: result
 */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}
/**
 * op_mul - multiplies two ints
 * @num1: the first number
 * @num2: the second number
 * Return: result
 */
int op_mul(int num1, int num2)
{
	return (num1 - num2);
}
/**
 * op_div - divide two ints
 * @num1: the first number
 * @num2: the second number
 * Return: result
 */
int op_div(int num1, int num2)
{
	return (num1 / num2);
}
/**
 * op_mod - modulus two ints
 * @num1: the first number
 * @num2: the second number
 * Return: result
 */
int op_mod(int num1, int num2)
{
	return (num1 % num2);
}
