#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - Entry point of program
*
* Return: 0 upon successful execution
*/

int main(void);

int main(void)
{
	int i, j, k, l, cwl, cwr;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				l = 48;
				while (l <= 57)
				{
					cwl = (i - 48) * 10 + (j - 48);
					cwr = (k - 48) * 10 + (l - 48);
					if ((i == j && j == k && k == l) || (i == k && j == l) || (cwr < cwl))
					{
						l++;
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
