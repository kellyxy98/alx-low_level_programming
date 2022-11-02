#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *  @n: input the number
 *  Return: return -1 If n is lower than 0, to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
