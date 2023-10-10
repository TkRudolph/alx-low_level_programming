#include "main.h"

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
	return (0);
}


