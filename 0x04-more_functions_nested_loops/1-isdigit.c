#include "main.h"

/**
 * _isdigit -check c is uppercase
 *
 * @c: input of function
 *
 * Return: 1 if upper else 0
*/

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
