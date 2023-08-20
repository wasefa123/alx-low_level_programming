#include"main.h"

/**
 * Description: _abs - function that computes the absolute
 *                     value of an integer
 *
 * @n: integer input for function
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
