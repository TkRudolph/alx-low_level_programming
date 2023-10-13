#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - tests if a number is positive or negative
 * @i - number to be tested
 *
 * Return: i
 */

void positive_or_negative(int i)
{


	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
}
