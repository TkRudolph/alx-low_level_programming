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

	printf("Size of a char:%zu\n byte(s)", sizeof(a));

	printf("Size of an int:%zu\n bytes(s)", sizeof(b));
	printf("Size of a long int:%zu\n bytes(s)", sizeof(c));
	printf("Size of a long long int:%zu\n byte(s)", sizeof(d));
	printf("Size of a float:%zu\n byt(s)", sizeof(e));
	return (0);
}
