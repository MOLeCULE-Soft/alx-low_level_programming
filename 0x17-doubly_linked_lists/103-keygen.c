#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* f4 - finds the biggest number
*
* @username: username
* Return: the biggest number
*/
int f4(char *username)
{
	short ch;

	ch = *username;

	while (*username)
	{
		ch = ch < *username ? *username : ch;
		username++;
	}

	srand(ch ^ 14);
	return (rand() & 63);
}

/**
* f5 - multiplies each char of username
*
* @usrn: username
* @len: length of username
* Return: multiplied char
*/
int f5(char *usrn, int len)
{
	int ch;

	int vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);

}

/**
* f6 - generates a random char
*
* @usrn: username
* Return: a random char
*/
int f6(char *usrn)
{
	int ch;

	int vch;

	ch = vch = 0;

	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);

}

/**
* main - Entry point
*
* @argc: arguments count
* @argv: arguments vector
* Return: Always 0
*/
int main(int argc, char **argv)
{
	char keygen[7], *tmp;

	int len, ch;

	long alph[] = {

		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	len = strlen(argv[1]);
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	ch = 0;
	tmp = argv[1];
	while (*tmp)
		ch += *tmp++;
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	tmp = argv[1];
	while (*tmp)
		ch *= *tmp++;
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1])];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
