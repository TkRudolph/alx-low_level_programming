#include <stdio.h>
/**
 * main - program that prints all hexadecimal numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
