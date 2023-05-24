#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two integers
 * @a: first number
 * @b: second number
 * Return: The sum of both numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: The difference of both numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: first number
 * @b: second number
 * Return: The product of both numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: The result of the division of both numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: The remainder of the division of both numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
