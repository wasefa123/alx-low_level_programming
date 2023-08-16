#include "main.h"

/**
 * Description: print_alphabet- using the -putchar function to print
 *           the alphabeta from a to z
*/

void print_alphabet_x10(void)
{
	int w, m;

	for (m = 0; m < 10; m++)
	{
		for (w = 'a'; w <= 'z'; w++)
			_putchar(w);
		_putchar('\n');
	}
}
