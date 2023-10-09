#include <stdio.h>
/**
 * main - program that prints the alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
