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

	printf("Size of a char:%d", sizeof(a));

	printf("Size of an int:%d", sizeof(b));
	printf("Size of a long int:%d", sizeof(c));
	printf("Size of a long long int:%d", sizeof(d));
	printf("Size of a float:%d", sizeof(e));
	return (0);
}
