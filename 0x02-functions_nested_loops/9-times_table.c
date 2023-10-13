#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int output = x * y;

			if (output < 10)
			{
				_putchar('0' + output);
			}
			else
			{
				_putchar('0' + output / 10);
				_putchar('0' + output % 10);
			}
			_putchar(',');
			_putchar('.');
			_putchar('.');
		}
		_putchar('\n');
	}
}
