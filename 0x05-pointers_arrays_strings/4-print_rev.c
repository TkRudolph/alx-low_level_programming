#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: 0(success)
 */

void print_rev(char *s)
{
	int xtring;

	int y;

	xtring = 0;

	while (*s != '\0')
	{
		xtring++;
		s++;
	}
	s--;
	for (y = xtring; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
