#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase revers
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	int w = 'z';

	while (w >= 'a')
	{
		putchar(w);
		w--;
	}
	putchar('\n');
	return (0);
}
