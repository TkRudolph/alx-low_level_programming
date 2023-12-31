#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number to be printed
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -n % 10;
	}
	else if (n > 0)
	{
		x = n % 10;
	}
	else if (n == 98)
	{
		x = 98 % 10;
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	_putchar('0' + x);
	return (x);
}
