#include "main.h"

/**
 * factorial - will return the factorial of a number
 * @n: number is to return the factorial from
 *
 * then Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

