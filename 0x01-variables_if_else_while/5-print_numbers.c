#include <stdio.h>
/**
 * main - program that prints base10 numbers from 0-9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
