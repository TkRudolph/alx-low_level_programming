#include <stdio.h>

/**
 * main - program that prints the alphabet in lower case
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	return (0);
}
