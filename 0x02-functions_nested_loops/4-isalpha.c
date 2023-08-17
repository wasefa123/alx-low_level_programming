#include"main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *            lowercase or uppercase
 *
 * @c: takes input from other function
 *
 * Return: 1 if c true else 0
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 90 || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
