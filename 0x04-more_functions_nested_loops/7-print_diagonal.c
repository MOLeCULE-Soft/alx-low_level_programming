#include "main.h"
/**
* print_diagonal - prints diagonal using backslash
* @n: length of diagonal
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j < i)
				_putchar(' ');
			else
				_putchar('\\');
		}
	}
	_putchar('\n');
}
