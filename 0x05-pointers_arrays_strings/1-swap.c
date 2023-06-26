#include "main.h"

/**
* swap-int - function that swaps the value of 2 integers
* @a: integer to swap
* @b: interger to swap
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
