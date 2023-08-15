#include"main.h"

/**
 * Description:  print_alphabet_x10 function that print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int i;
	char w;

	for (i = 0; i <= 9; i++)
	{
		for (w = 'a'; w <= 'z'; w++)
			_putchar(w++);
	}
	_putchar('\n');
}
