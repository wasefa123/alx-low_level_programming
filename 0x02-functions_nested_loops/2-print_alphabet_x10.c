#include "main.h"
/**
 * Description:  print_alphabet_x10 - function that print alphabet 10 times
 *
*/

void print_alphabet_x10(void);
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		_putchar('\n');
		}
	}
}
