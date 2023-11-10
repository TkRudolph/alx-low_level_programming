#include "main.h"
/**
 * factorial - finding  the factorial of a number
 * @n:no. to factorialize
 * Return:  factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
