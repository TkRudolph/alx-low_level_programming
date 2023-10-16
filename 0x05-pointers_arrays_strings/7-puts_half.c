#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return:(success)
 */

void puts_half(char *str)
{
	int z;

	int x;

	int y;

	y = 0;

	for (z = 0; str[z] != '\0'; z++)
		y++;

	x = (y / 2);

	if ((y % 2) == 1)
		x = ((y + 1) / 2);

	for (z = x; str[z] != '\0'; z++)
		_putchar(str[z]);
	_putchar('\n');
}
