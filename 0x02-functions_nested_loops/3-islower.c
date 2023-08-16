#include "main.h"

/**
 *  _islower - function check the number
 *           if lowercase or not
 *
 * 0c: check intput of function _islower
 *
 *
 * Return: return 1 if 'c' is lowercase
 *         else return 0
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
