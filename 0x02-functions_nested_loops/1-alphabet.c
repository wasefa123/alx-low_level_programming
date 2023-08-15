#include "main.h"

/**
 * Description: prints the alphabet, in lowercase in new line
 *
 * return:0 success
 *
*/

void print_alphabet(void)
{
	int w;

	for (w = 'a'; w <= 'z'; w++)
		_putchar(w);
	_putchar('\n');
}
