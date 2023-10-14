#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: number to be printed
 *
 * Return: n
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n >= 10)
		{
			putchar('0' + n / 10);
			putchar('0' + n % 10);
		}
		else if (n <= 9)
		{
			putchar('0' + n);
		}
		putchar(',');
		putchar(' ');
	}
}
