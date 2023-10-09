#include <stdio.h>
/**
 * main - program that prints single digit base10 no. from 0-9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
