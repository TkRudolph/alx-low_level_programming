#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 *
 * @n: number to be printed
 *
 * Return: n
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int sub;

		for (sub = n; sub <= 98; sub++)
		{
			printf("%d", sub);

			if (sub < 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		int sub;

		for (sub = n; sub >= 98; sub--)
		{
			printf("%d", sub);

			if (sub > 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
