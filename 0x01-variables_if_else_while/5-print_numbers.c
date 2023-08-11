#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints single digit
 *
 * Return: 0 (success)*
 *
*/

int main(void)
{
	int nuw = 0;

	while (nuw <= 9)
	{
		printf("%i", nuw);
		nuw++;
	}
	printf("\n");

	return (0);
}
