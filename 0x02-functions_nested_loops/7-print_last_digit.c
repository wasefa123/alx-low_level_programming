#include"main.h"

/**
 * print_last_digit - print the last digit of number
 *
 * @w: input number of function
 *
 * Return: last digit of number
*/

int print_last_digit(int w)
{
	int l;

	if (w < 0)
		l = -1 * (w % 10);
	else
		l = w % 10;

	_putchar(l + '0');
	return (l);
}
