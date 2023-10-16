#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: string
 * Return: (success)
 */

void puts2(char *str)
{
	int i;

	int x;

	int y;

	char *p = str;

	i = 0;

	x = 0;

	while (*p != '\0')
	{
		p++;
		x++;
	}
	i = x - 1;
	for (y = 0; y <= i; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
