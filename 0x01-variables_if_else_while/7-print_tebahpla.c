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
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
