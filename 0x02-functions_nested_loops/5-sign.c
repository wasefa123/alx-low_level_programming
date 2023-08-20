#include"main.h"

/**
 * Description: print_sign - print + if number is postive
 *              0 if number is zero
 *              and - if number is negativ
 * @n: integer number input of function.
 *
 * Return: 1 if + , 0 if zero , -1 if -
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
