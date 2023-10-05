#include <stdio.h>

/**
 * main - program that prints various data types using sizeof operator
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));

	printf("Size of an int: %zu bytes(s)\n", sizeof(b));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of a float: %zu byt(s)\n", sizeof(e));
	return (0);
}
