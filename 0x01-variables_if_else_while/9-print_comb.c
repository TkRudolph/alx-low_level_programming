#include <stdio.h>
/**
 * main - program that prints all single digit no.
 * the numbers must be separated by a comma and space.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{


		putchar('0' + x);

		if (x < 9)
		{

		putchar(',');

		putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
