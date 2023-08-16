#include "main.h"

/**
 *  _islower - function check the number
 *           if lowercase or not
 *
 * c: check intput of function _islower
 *
 *
 * Return: Always  (1) if success else (0)
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
