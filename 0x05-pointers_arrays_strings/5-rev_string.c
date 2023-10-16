#include "main.h"

/**
 * rev_string - program that reverses a string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char reverse = s[0];

	int bounce;

	int x;

	bounce = 0;

	while (s[bounce] != '\0')
		bounce++;

	for (x = 0; x < bounce; x++)
	{
		bounce--;
		reverse = s[x];
		s[x] = s[bounce];
		s[bounce] = reverse;
	}
}
