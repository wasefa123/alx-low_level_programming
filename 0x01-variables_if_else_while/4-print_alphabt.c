#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet except e and q
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	char w = 'a';

	while (w <= 'z')
	{
		if (w == 'e' || w == 'q')
			w++;
		putchar(w);
		w++;
	}
	putchar('\n');

	return (0);
}
