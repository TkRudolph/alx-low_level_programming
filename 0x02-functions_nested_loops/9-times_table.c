#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */

void times_tables(void)
{
	int x;
	for (x = 0; x <= 10; x++)
	{
		int print = 9 * x;
		if (print < 10)
		{
			_putchar('0' + print);
		}
		else
		{
			_putchar('0' + print / 10);
			_putchar('0' + print % 10);
		}
		_putchar('\n');
	}
}	
