#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two numbers
 * @a: The first number.
 * @b: The second number
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: ...
 * @b: ...
 *
 *  Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - ...
 * @a: ...
 * @b: ...
 *
 *  Return: ...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
