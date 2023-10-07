#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - program that evaluates the last digit of a certain number
 *
 * Return: 0 (success)
 */
int main(void)
{
int n;

int x;

srand(time(0));

n = rand() - RAND_MAX / 2;
x = n % 10;

if (n == 980)
{
printf("Last digit of 980 is 0 and is 0\n", n, x);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}

else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
