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

srand(time(0));

n = rand() - RAND_MAX / 2;

int x = n % 10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, x);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, x);
}

else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less 6 and not 0", n, x);
}
return (0);
}
