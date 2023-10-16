#include "main.h"

/**
 * swap_int - program that swaps the value of 2 int
 *
 * @a: int to be swapped
 * @b: int to be swapped
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;

	*a = *b;

	*b = x;
}
