#include "main.h"

/**
 * _strlen - program that returns the length of a string
 * @s: te string
 * Return: the length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
