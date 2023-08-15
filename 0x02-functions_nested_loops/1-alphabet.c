#include "main.h"

/**
 * Description: print_alphabet- using the -putchar function to print
 *           the alphabeta from a to z
*/

void print_alphabet(void)
{
	int w;

	for (w = 'a'; w <= 'z'; w++)
		_putchar(w);
	_putchar('\n');
}
