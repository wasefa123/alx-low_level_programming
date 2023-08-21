#include"main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: input one of function
 * @b: input two of function
 *
 * Return: nothing to return
*/

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
